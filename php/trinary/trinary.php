<?php

// Implementation note:
// --------------------
// If the argument to parse_$trinary isn't a valid $trinary value the
// function should raise an \InvalidArgumentException
// with a meaningful error message.

function toDecimal($trinary)
{
	$result = 0;
	$power = 1; 

	for ($i = strlen($trinary); $i > 0; $i--) {
		$c = $trinary[$i - 1];

		if ($c != '0' && $c != '1' && $c != '2') {
			return 0;
		}

		if ($c == '1' || $c == '2') {
			$result += (ord($c) - ord("0")) * $power;
		}

		$power *= 3;
	}

	return $result;
}
