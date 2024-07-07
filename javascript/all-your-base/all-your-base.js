const isValidBase = base => Number.isInteger(base) && base >= 2;

const numberIsNotEmpty = explodedNumber => explodedNumber.length !== 0;

const digitsAreAllValidInBase = (explodedNumber, base) =>
  explodedNumber.every(n => n >= 0 && n < base);

const numberHasNoLeadingZeros = explodedNumber =>
  // first digit can be zero only if it's the only digit
  explodedNumber.length === 1 || explodedNumber[0] !== 0;

const isValidExplodedNumber = (explodedNumber, base) =>
  numberIsNotEmpty(explodedNumber) &&
  digitsAreAllValidInBase(explodedNumber, base) &&
  numberHasNoLeadingZeros(explodedNumber);

const convertToBaseTen = (explodedNumber, currBase) =>
  explodedNumber.reduce((acc, curr) => acc * currBase + curr);

const convertToNewBase = (num, newBase) => {
  let remainder = num;
  const result = [];

  do {
    result.unshift(remainder % newBase);
    remainder = Math.floor(remainder / newBase);
  } while (remainder > 0);

  return result;
};

// [1, 0, 1]

export const convert = (explodedNumber, currBase, newBase) => {
  if (!isValidBase(currBase)) {
    throw new Error("Wrong input base");
  }

  if (!isValidBase(newBase)) {
    throw new Error("Wrong output base");
  }

  if (!isValidExplodedNumber(explodedNumber, currBase)) {
    throw new Error("Input has wrong format");
  }

  const baseTenNumber = convertToBaseTen(explodedNumber, currBase);

  return convertToNewBase(baseTenNumber, newBase);
};
