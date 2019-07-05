<?php

function parse_binary($binary)
{
	$len = strlen($binary) - 1;

	$result = array_reduce(
		str_split($binary), 
		function($carry, $digit) use (&$len) {
			if ($digit != '0' && $digit != '1') {
				throw new InvalidArgumentException(
					"Invalid argument to function `parse_binary`"
				);
			}

			if ($digit == '1') {
				$carry += pow(2, $len);
			}

			$len -= 1;

			return $carry;
		}, 
		0
	);

	return $result;
}
