const RAINDROPS = new Map([[3, "Pling"], [5, "Plang"], [7, "Plong"]]);

export const convert = input => {
  let result = "";

  // Map.foreach gives value (word) first, then key (num)
  RAINDROPS.forEach((word, num) => {
    input % num === 0 ? (result += word) : null;
  });

  result === "" ? (result += input) : null;

  return result;
};
