export const rows = numRows => {
  const triangle = [];

  for (let i = 0; i < numRows; i++) {
    const previousRow = triangle[i - 1] ?? [];
    triangle.push(buildNextRow(previousRow));
  }

  return triangle;
};

const buildNextRow = previousRow => {
  const nextRow = [1];

  for (let i = 1; i <= previousRow.length; i++) {
    nextRow.push(previousRow[i - 1] + (previousRow?.[i] ?? 0));
  }

  return nextRow;
};
