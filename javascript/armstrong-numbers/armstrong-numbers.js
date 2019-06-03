export const validate = input => {
  const str = input.toString();

  let result = 0;

  [...str].forEach(c => (result += Math.pow(c, str.length)));

  return result === input;
};
