<?php

// this is not a very good name for this function
// I would not expect it to return a bool
function placeQueen($rank, $file) {
    if ($rank < 0 || $file < 0) {
        throw new InvalidArgumentException("The rank and file numbers must be positive.");
    }

    if ($rank >= 8 || $file >= 8) {
        throw new InvalidArgumentException("The position must be on a standard size chess board.");
    }

    return true;
}

function canAttack($whitePos, $blackPos) {
    placeQueen($whitePos[0], $whitePos[1]);
    placeQueen($blackPos[0], $blackPos[1]);

    // horizontal or vertical attack
    if ($whitePos[0] === $blackPos[0] || $whitePos[1] === $blackPos[1]) {
        return true;
    }

    // diagonal attack
    if (abs($whitePos[0] - $blackPos[0]) === abs($whitePos[1] - $blackPos[1])) {
        return true; 
    }

    return false;
}