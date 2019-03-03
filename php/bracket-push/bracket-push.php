<?php

function brackets_match(string $input) {
	$dict = array(
		"(" => ")", 
		"{" => "}",
		"[" => "]"
	);

	$stack = array();

	$keys = array_keys($dict);
	$values = array_values($dict);

	for ($i = 0; $i < strlen($input); $i++) {
		if (in_array($input[$i], $keys)) {
			array_push($stack, $input[$i]);
		} elseif (in_array($input[$i], $values)) {
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