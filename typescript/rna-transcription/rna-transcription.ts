const RNA_MAP = {
  C: "G",
  G: "C",
  A: "U",
  T: "A",
} as const;

type Nucleotide = keyof typeof RNA_MAP;

const isValidNucleotide = (nucleotide: string): nucleotide is Nucleotide => {
  return Object.keys(RNA_MAP).includes(nucleotide);
};

const isValidNucleotideStrand = (nucleotides: string[]): boolean =>
  nucleotides.every(isValidNucleotide);

export const toRna = (dnaStrand: string): string => {
  const nucleotides = [...dnaStrand];

  if (!isValidNucleotideStrand(nucleotides)) {
    throw new Error("Invalid input DNA.");
  }

  return nucleotides
    .map(nucleotide => RNA_MAP[nucleotide as Nucleotide])
    .join("");
};
