<?php

const RNA_COMPLEMENTS = [
    'G' => 'C',
    'C' => 'G',
    'T' => 'A',
    'A' => 'U'
];

function rnaComplement(string $input) {
    return RNA_COMPLEMENTS[$input];
}

function toRna(string $input) {
    $complements = array_map("rnaComplement", str_split($input));

    return join("", $complements); 
}