<?php

class Triangle 
{
    private $a;
    private $b; 
    private $c; 

    function __construct($a, $b, $c) {
        $this->a = $a; 
        $this->b = $b;
        $this->c = $c; 
    }

    function kind() {
        if ($this->a <= 0 || $this->b <= 0 || $this->c <= 0) {
            throw new Exception("Sides of negative length or length 0 are not allowed.");
        }

        $sides = array($this->a, $this->b, $this->c);
        sort($sides); 
        if ($sides[2] >= $sides[0] + $sides[1]) {
            throw new Exception("This is not a valid triangle.");
        }

        if ($this->a === $this->b && $this->b === $this->c) {
            return "equilateral";
        }

        if ($this->a === $this->b || $this->a === $this->c || $this->b === $this->c) {
            return "isosceles";
        }

        return "scalene";
    }
}