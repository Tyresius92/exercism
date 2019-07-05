const PROTEINS = {
  AUG: 'Methionine',
  UUU: 'Phenylalanine',
  UUC: 'Phenylalanine',
  UUA: 'Leucine',
  UUG: 'Leucine',
  UCU: 'Serine',
  UCC: 'Serine',
  UCA: 'Serine',
  UCG: 'Serine',
  UAU: 'Tyrosine',
  UAC: 'Tyrosine',
  UGU: 'Cysteine',
  UGC: 'Cysteine',
  UGG: 'Tryptophan',
  UAA: 'STOP',
  UAG: 'STOP',
  UGA: 'STOP'
};

const getCodons = input => {
  return [...input].reduce((resultArray, val, index, arr) => {
    if (index % 3 === 0) {
      resultArray.push(''.concat(arr.slice(index, index + 3).join('')));
    }

    return resultArray;
  }, []);
};

const getProteins = codons => {
  return codons.reduce(
    (result, code) => {
      if (!PROTEINS[code]) {
        throw new Error('Invalid codon');
      }

      if (PROTEINS[code] === 'STOP') {
        result.stopEncountered = true;
      } else if (!result.stopEncountered) {
        result.proteins.push(PROTEINS[code]);
      }

      return result;
    },
    { proteins: [], stopEncountered: false }
  ).proteins;
};

export const translate = input => {
  if (!input) {
    return [];
  }

  const codons = getCodons(input);

  return getProteins(codons);
};
