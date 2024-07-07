export const square = num => {
  if (num < 1 || num > 64) {
    throw new Error("square must be between 1 and 64");
  }

  return (BigInt(2) ** BigInt(num - 1)).toString();
};

export const total = () => (BigInt(2) ** BigInt(64) - BigInt(1)).toString();
