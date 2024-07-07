const DNA_MAP = {
  C: "G",
  G: "C",
  T: "A",
  A: "U",
};

export const toRna = dnaStrand =>
  dnaStrand
    .split("")
    .map(n => DNA_MAP[n])
    .join("");
