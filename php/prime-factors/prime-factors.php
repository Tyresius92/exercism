<?php

function factors($num) : array {
	$factors = array();
	$i = 2; 

	while ($i * $i <= $num) {
		while ($num % $i === 0) {
			array_push($factors, $i); 
			$num = $num / $i; 
		}

		$i++;
	}

	if ($num > 1) {
		array_push($factors, $num); 
	}

	return $factors;
}