export class NucleotideCounts {
  static countNucleotides = strand =>
    [...strand].reduce(
      (counts, nucleotide) => {
        if (!Object.keys(counts).includes(nucleotide)) {
          throw new Error("Invalid nucleotide in strand");
        }

        counts[nucleotide] += 1;
        return counts;
      },
      {
        A: 0,
        C: 0,
        G: 0,
        T: 0,
      }
    );

  static parse = strand => {
    const count = NucleotideCounts.countNucleotides(strand);

    return `${count["A"]} ${count["C"]} ${count["G"]} ${count["T"]}`;
  };
}
