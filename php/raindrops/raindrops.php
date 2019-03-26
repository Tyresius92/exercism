<?php

define("PLING", "Pling");
define("PLANG", "Plang");
define("PLONG", "Plong");

function raindrops(int $num) : string {
	$result = "";

	if ($num % 3 === 0) {
		$result .= PLING;
	} 

	if ($num % 5 === 0) {
		$result .= PLANG;
	}

	if ($num % 7 === 0) {
		$result .= PLONG;
	}

	if ($result === "") {
		$result .= (string) $num;
	}

	return $result;
} 