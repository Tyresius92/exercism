const BRACKET_MAP = {
  "{": "}",
  "[": "]",
  "(": ")"
};

const OPENING_BRACKETS = Object.keys(BRACKET_MAP);
const CLOSING_BRACKETS = Object.values(BRACKET_MAP);

export const matchingBrackets = input => {
  const stack = [];

  return (
    [...input].every(bracket => {
      if (OPENING_BRACKETS.includes(bracket)) {
        stack.push(bracket);
      } else if (CLOSING_BRACKETS.includes(bracket)) {
        if (stack.length === 0 || bracket !== BRACKET_MAP[stack.pop()]) {
          return false;
        }
      }
      return true;
    }) && !stack.length
  );
};
