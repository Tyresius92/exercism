<?php

function from(DateTime $from) : DateTimeImmutable {
    $interval = new DateInterval('PT1000000000S');
    $date = DateTimeImmutable::createFromMutable($from);
    $date = $date->add($interval);
    return $date;
}