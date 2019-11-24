<?php

function isIsogram(string $input) {
    $foundLetters = [];
    $stripped = str_replace(["-", " "], "", mb_strtolower($input));

    for ($i = 0; $i < mb_strlen($stripped); $i++) {
        $letter = mb_substr($stripped, $i, 1);

        if (empty($foundLetters[$letter])) {
            $foundLetters[$letter] = true;
        } else {
            return false;
        }
    }

    return true;
}    

