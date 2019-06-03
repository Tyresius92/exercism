export const compute = (left, right) => {
  if (!left.length && right) {
    throw new Error('left strand must not be empty');
  }

  if (!right.length && left) {
    throw new Error('right strand must not be empty');
  }

  if (left.length !== right.length) {
    throw new Error('left and right strands must be of equal length');
  }

  let result = 0;

  [...left].map((leftChar, index) => {
    if (leftChar !== right[index]) {
      result++;
    }
  });

  return result;
};
