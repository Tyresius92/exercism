const getLetterMapForScore = ([score, letters]) =>
  Object.fromEntries(
    letters.map(letter => [letter.toLowerCase(), Number(score)])
  );

export const transform = old =>
  Object.entries(old).reduce(
    (acc, entry) => ({
      ...acc,
      ...getLetterMapForScore(entry),
    }),
    {}
  );
