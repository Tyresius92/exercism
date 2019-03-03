<?php

//
// This is only a SKELETON file for the "Run Length Encoding" exercise. It's been provided as a
// convenience to get you started writing code faster.
//

function encode($input)
{
    $encoded = "";
    $num = 0;

    for ($i = 0; $i < strlen($input); $i++) {
    	if ($i === (strlen($input) - 1) || $input[$i] != $input[$i + 1]) {
    		if ($num === 0) {
    			$encoded .= $input[$i];
    		} else {
    			$encoded .= strval($num + 1) . $input[$i];
    			$num = 0;
    		}
    	} else {
    		$num ++;
    	}
    }

    return $encoded;
}

function decode($input)
{
    $decoded = "";
    $num = "";

    for ($i = 0; $i < strlen($input); $i++) {
    	if (is_numeric($input[$i])) {
    		$num .= $input[$i];
    	} else {
    		if ($num === "") {
    			$num = "1";
    		}

    		// not wild about using type coercion on $num
    		$decoded .= str_repeat($input[$i], $num); 
    		
    		$num = "";
    	}
    }

    return $decoded;
}
