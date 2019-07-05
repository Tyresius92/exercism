export const transform = old => {
  const result = {};

  Object.keys(old).forEach(key => {
    old[key].forEach(letter => {
      result[letter.toLowerCase()] = parseInt(key, 10);
    });
  });

  return result;
};
