// Convert number to a string, explode it into an array,
// and convert each element back to a number
const getExplodedDigits = number => [...number.toString()].map(Number);

export const isArmstrongNumber = number => {
  const armstrongCalculationResult = getExplodedDigits(number).reduce(
    (acc, n, _, digits) => acc + Math.pow(n, digits.length),
    0
  );

  return armstrongCalculationResult === number;
};
