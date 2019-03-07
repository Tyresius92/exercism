<?php

function wordCount(string $input) {
	$input = preg_replace("/[[:punct:]]+/", "", $input);
	$input = trim($input);
	$input = strtolower($input);

	$words = preg_split("/[\s]+/", $input);
	
	$counts = array();

	for ($i = 0; $i < count($words); $i++) {
		if (array_key_exists($words[$i], $counts)) {
			$counts[$words[$i]]++;
		} else {
			$counts[$words[$i]] = 1;
		}
	}

	return $counts;
}