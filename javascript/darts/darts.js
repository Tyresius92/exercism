export const solve = (x, y) => {
  if (typeof x !== "number" || typeof y !== "number") {
    return null;
  }

  const distanceFromOrigin = Math.sqrt(x * x + y * y);

  if (distanceFromOrigin === 0) {
    return 10;
  }

  if (distanceFromOrigin <= 5) {
    return 5;
  }

  if (distanceFromOrigin <= 10) {
    return 1;
  }

  return 0;
};
