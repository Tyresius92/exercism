<?php

function isPangram($input)
{
	$input = strtolower($input);
	$letters = array_fill_keys(range("a", "z"), False);

	for ($i = 0; $i < strlen($input); $i++) {
		$letters[$input[$i]] = True;
	}

	return !in_array(False, $letters);
}
