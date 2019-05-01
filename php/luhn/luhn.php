<?php

function getLuhnDouble(int $num) : int {
	$result = ($num * 2 >= 10) ? $num * 2 - 9 : $num * 2;

	return $result;
}

function isValid(string $input) : bool {
	$stripped = str_replace(" ", "", $input);

	$len = strlen($stripped);

	if ($len <= 1) {
		return false;
	}

	$doubleOddIndexes = (bool) ($len % 2);
	$sum = 0;

	for ($i = $len - 1; $i >= 0; $i--) {
		if (!is_numeric($stripped[$i])) {
			return false;
		}

		$current = (int) $stripped[$i];

		if ($doubleOddIndexes) {
			$sum += ($i % 2) ? getLuhnDouble($current) : $current;
		} else {
			$sum += ($i % 2) ? $current : getLuhnDouble($current);
		}
	}

	return !($sum % 10);
}

