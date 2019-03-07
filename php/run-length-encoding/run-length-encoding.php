<?php

function encode($input)
{
    $encoded = "";
    $count = 0;

    for ($i = 0; $i < strlen($input); $i++) {
        $count++;

    	if (isEndOfRun($input, $i)) {
    		$encoded .= getNextEncoding($input[$i], $count);
    		$count = 0;
    	}
    }

    return $encoded;
}

function isEndOfRun($input, $i) {
    return ($i === (strlen($input) - 1) || $input[$i] != $input[$i + 1]);
}

function getNextEncoding($char, $num) {
    if ($num === 1) {
        return $char;
    } else {
        return strval($num) . $char;
    }
}

function decode($input)
{
    $decoded = "";
    $num = "";

    for ($i = 0; $i < strlen($input); $i++) {
    	if (is_numeric($input[$i])) {
    		$num .= $input[$i];
    	} else { // is alpha
            if (!$num) {
                $num = "1";
            }

            $decoded .= str_repeat($input[$i], (int) $num); 
            $num = "";
        }
    }

    return $decoded;
}
