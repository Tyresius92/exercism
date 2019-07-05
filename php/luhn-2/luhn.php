<?php

function getLuhnDouble(int $num) : int {
	return (($num * 2) / 10) + (($num * 2) % 10);
}

function isValid(string $input) : bool {
	$stripped = str_replace(" ", "", $input);

	$len = strlen($stripped);

	if ($len <= 1) {
		return false;
	}

	$is_double_index = false;
	$sum = 0;

	for ($i = $len - 1; $i >= 0; $i--) {
		if (!is_numeric($stripped[$i])) {
			return false;
		}

		$current = (int) $stripped[$i];

		$sum += $is_double_index ? getLuhnDouble($current) : $current;

		$is_double_index = !$is_double_index;
	}

	return !($sum % 10);
}

