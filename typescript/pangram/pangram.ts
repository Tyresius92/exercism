const ALPHABET = [..."abcdefghijklmnopqrstuvwxyz"];

export const isPangram = (input: string): boolean =>
  ALPHABET.every(letter => input.toLowerCase().includes(letter));
