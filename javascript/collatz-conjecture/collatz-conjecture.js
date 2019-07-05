export const steps = num => {
  if (num < 1) {
    throw new Error('Only positive numbers are allowed');
  }

  let numSteps = 0;

  while (num !== 1) {
    num = num % 2 ? 3 * num + 1 : num / 2;
    numSteps++;
  }

  return numSteps;
};
