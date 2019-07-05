export const reverseString = input => {
  return [...input].reduce((acc, char) => char + acc, "");
};
