const isValidBase = base => {
  return Number.isInteger(base) && base >= 2;
};

const isValidInputArray = (array, currBase) => {
  return (
    array.length >= 1 &&
    array.every(elem => elem >= 0 && elem < currBase) &&
    (array.length === 1 || array[0] !== 0)
  );
};

const convertToBaseTen = (array, currBase) => {
  let asInteger = 0;

  array.forEach(digit => {
    asInteger = asInteger * currBase + digit;
  });

  return asInteger;
};

const convertIntegerToBase = (integer, newBase) => {
  let mutableCopy = integer;
  const result = [];

  do {
    result.unshift(mutableCopy % newBase);
    mutableCopy = Math.floor(mutableCopy / newBase);
  } while (mutableCopy > 0);

  return result;
};

export const convert = (array, currBase, newBase) => {
  if (!isValidBase(currBase)) {
    throw new Error('Wrong input base');
  }

  if (!isValidBase(newBase)) {
    throw new Error('Wrong output base');
  }

  if (!isValidInputArray(array, currBase)) {
    throw new Error('Input has wrong format');
  }

  const asInteger = convertToBaseTen(array, currBase);

  return convertIntegerToBase(asInteger, newBase);
};
