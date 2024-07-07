const isShouting = (message: string): boolean =>
  message.toUpperCase() === message && message.toLowerCase() !== message;

const isQuestion = (message: string): boolean => message.endsWith("?");

const isShoutedQuestion = (message: string): boolean =>
  isShouting(message) && isQuestion(message);

export const hey = (message: string): string => {
  const trimmed = message.trimStart().trimEnd();

  if (trimmed === "") {
    return "Fine. Be that way!";
  }

  if (isShoutedQuestion(trimmed)) {
    return "Calm down, I know what I'm doing!";
  }

  if (isShouting(trimmed)) {
    return "Whoa, chill out!";
  }

  if (isQuestion(trimmed)) {
    return "Sure.";
  }

  return "Whatever.";
};
