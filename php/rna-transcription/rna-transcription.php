<?php

function rnaComplement(string $input) {
    if ($input === "C") {
        return "G";
    } else if ($input === "G") {
        return "C";
    } else if ($input === "T") {
        return "A";
    } else if ($input === "A") {
        return "U";
    }
}

function toRna(string $input) {
    $complements = array();

    for ($i = 0; $i < strlen($input); $i++) {
        array_push($complements, rnaComplement($input[$i]));
    }

    return join("", $complements); 
}