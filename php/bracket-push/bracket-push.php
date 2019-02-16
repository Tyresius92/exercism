<?php

function brackets_match(string $input) {
	$dict = array(
		"(" => ")", 
		"{" => "}",
		"[" => "]"
	);

	$stack = array();

	for ($i = 0; $i < strlen($input); $i++) {
		if (in_array($input[$i], array_keys($dict))) {
			array_push($stack, $input[$i]);
		} elseif (in_array($input[$i], array_values($dict))) {
			if (!$stack) {
				return false;
			}

			$stack_top = array_pop($stack); 

			if ($dict[$stack_top] !== $input[$i]) {
				return false;
			}
		}
	}

	return !$stack;
}