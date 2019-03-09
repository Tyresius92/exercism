<?php

// Implementation note:
// --------------------
// If the argument to parse_binary isn't a valid binary value the
// function should raise an \InvalidArgumentException
// with a meaningful error message.

function parse_binary($binary)
{
	$result = 0;
	$power = 1; 

	for ($i = strlen($binary); $i > 0; $i--) {
		$c = $binary[$i - 1];

		if ($c != '0' && $c != '1') {
			throw new InvalidArgumentException("Invalid argument to function `parse_binary`");
		}

		if ($c == '1') {
			$result += $power;
		}

		$power *= 2;
	}

	return $result;
}
