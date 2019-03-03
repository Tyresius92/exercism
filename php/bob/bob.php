<?php

class Bob
{
	function respondTo(string $input) : string {
		// Remove all whitespace
		$stripped = preg_replace('/\s+/', '', $input);

		if ($stripped === "") {
			return "Fine. Be that way!";
		}

		if ($this->isShouted($stripped)) {
			if ($this->isQuestion($stripped)) {
				return "Calm down, I know what I'm doing!";
			} else {
				return "Whoa, chill out!";
			}
		} else {
			if ($this->isQuestion($stripped)) {
				return "Sure.";
			} else {
				return "Whatever.";
			}
		}
	}

	function isShouted(string $input) : bool {
		$is_only_shout_chars = preg_match("/^[0-9!,%@#$(*^?A-Z]+$/", $input);
		$contains_uppercase = !preg_match("/^[0-9!,%@#$(*^?]+$/", $input);

		return $is_only_shout_chars && $contains_uppercase;
	}

	function isQuestion(string $input) : bool {
		return substr($input, -1) === "?";
	}
}