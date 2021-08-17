export const hey = message => {
  const trimmed = message.trimStart().trimEnd();

  if (trimmed.length === 0) {
    return "Fine. Be that way!";
  }

  const isShouting =
    trimmed.toUpperCase() === trimmed && trimmed.toLowerCase() !== trimmed;

  const isQuestion = trimmed[trimmed.length - 1] === "?";

  if (isShouting && isQuestion) {
    return "Calm down, I know what I'm doing!";
  }

  if (isShouting) {
    return "Whoa, chill out!";
  }

  if (isQuestion) {
    return "Sure.";
  }

  return "Whatever.";
};
