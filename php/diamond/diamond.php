<?php

function build_string(string $letter, int $out_space, int $in_space) {
	$result = "";

	$result .= str_repeat(" ", $out_space);
	$result .= $letter;
	if ($in_space >= 0) {
		$result .= str_repeat(" ", $in_space); 
		$result .= $letter;
	}
	$result .= str_repeat(" ", $out_space);

	return $result;
}

function diamond(string $letter) {
	$array = array();

	$out_space = 0;
	$in_space = (ord($letter) - ord("A")) * 2 - 1;

	foreach (range($letter, "A") as $curr_letter) {
		$line = build_string($curr_letter, $out_space, $in_space);
		
		array_push($array, $line);
		
		if ($curr_letter != $letter) {
			array_unshift($array, $line); 
		}

		$out_space++;
		$in_space -= 2;
	}
	
	return $array; 
}