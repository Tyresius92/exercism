export const encode = input => {
  let encoded = "";
  let num = 0;
  let curr = "";

  [...input].map((char, index) => {
    if (index === input.length - 1 || char !== input[index + 1]) {
      num !== 0 ? (encoded += num + 1) : null;
      encoded += char;
      num = 0;
    } else {
      num += 1;
    }
  });

  return encoded;
};

export const decode = input => {
  let decoded = "";
  let num_as_str = "";

  [...input].map((char, index) => {
    if (char >= "0" && char <= "9") {
      num_as_str += char;
    } else {
      if (num_as_str === "") {
        num_as_str = "1";
      }
      decoded += char.repeat(num_as_str);
      num_as_str = "";
    }
  });

  return decoded;
};
