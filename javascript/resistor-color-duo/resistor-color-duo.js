const COLORS = [
  'black',
  'brown',
  'red',
  'orange',
  'yellow',
  'green',
  'blue',
  'violet',
  'grey',
  'white'
];

export const value = inputColors => {
  return parseInt(
    inputColors.reduce((acc, color) => acc + COLORS.indexOf(color), ''),
    10
  );

  //   I contend that the below is significantly more readable.
  //
  //   let result = '';
  //
  //   inputColors.forEach(color => {
  //     result += COLORS.indexOf(color);
  //   });
  //
  //   return parseInt(result, 10);
};
