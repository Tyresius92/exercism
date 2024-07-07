const isLowerAlpha = letter => letter >= "a" && letter <= "z";

export const isPangram = input => {
  const foundLetters = new Set([...input.toLowerCase()].filter(isLowerAlpha));

  return foundLetters.size === 26;
};
