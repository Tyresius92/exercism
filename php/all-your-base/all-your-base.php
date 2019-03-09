<?php

function isValidArray(int $base, array $nums) {
	if (empty($nums) || $nums[0] === 0) {
		return false;
	}

	for ($i = 0; $i < count($nums); $i++) {
		if ($nums[$i] < 0 || $nums[$i] >= $base) {
			return false;
		}
	}

	return true;
}

function rebase(int $curr_base, array $nums, int $new_base) {
	// verify user input is valid
	if ($curr_base < 2 || $new_base < 2 || !isValidArray($curr_base, $nums)) {
		return null;
	}

	$result = array();
	$as_int = 0;

	//convert to base 10 integer
	for ($i = 0; $i < count($nums); $i++) {
		$as_int = ($as_int * $curr_base) + $nums[$i]; 
	}

	//convert base 10 integer to array of digits in $new_base base
	while ($as_int > 0) {
		array_unshift($result, $as_int % $new_base);
		$as_int = intdiv($as_int, $new_base); 
	}

	return $result;
}