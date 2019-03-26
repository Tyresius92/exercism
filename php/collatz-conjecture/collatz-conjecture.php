<?php

function steps(int $num) : int {
	if ($num < 1) {
		throw new InvalidArgumentException('Only positive numbers are allowed');
	}

	$result = 0;

	while ($num !== 1) {
		if ($num % 2 === 0) {
			$num = $num / 2;
		} else {
			$num = ($num * 3) + 1;
		}

		$result += 1;
	}

	return $result;
}
