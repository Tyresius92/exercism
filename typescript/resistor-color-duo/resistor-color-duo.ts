enum COLOR {
  black,
  brown,
  red,
  orange,
  yellow,
  green,
  blue,
  violet,
  grey,
  white,
}

const colorCode = (color: string): number => COLOR[color];

export const decodedValue = ([colorOne, colorTwo]: string[]): number =>
  colorCode(colorOne) * 10 + colorCode(colorTwo);
