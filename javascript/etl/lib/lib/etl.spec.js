"use strict";

var _etl = require("./etl");

describe("Transform legacy to new", function () {
  test("single letter", function () {
    var old = {
      1: ["A"]
    };
    var expected = {
      a: 1
    };
    expect((0, _etl.transform)(old)).toEqual(expected);
  });
  test("single score with multiple letters", function () {
    var old = {
      1: ["A", "E", "I", "O", "U"]
    };
    var expected = {
      a: 1,
      e: 1,
      i: 1,
      o: 1,
      u: 1
    };
    expect((0, _etl.transform)(old)).toEqual(expected);
  });
  test("multiple scores with multiple letters", function () {
    var old = {
      1: ["A", "E"],
      2: ["D", "G"]
    };
    var expected = {
      a: 1,
      e: 1,
      d: 2,
      g: 2
    };
    expect((0, _etl.transform)(old)).toEqual(expected);
  });
  test("multiple scores with differing numbers of letters", function () {
    var old = {
      1: ["A", "E", "I", "O", "U", "L", "N", "R", "S", "T"],
      2: ["D", "G"],
      3: ["B", "C", "M", "P"],
      4: ["F", "H", "V", "W", "Y"],
      5: ["K"],
      8: ["J", "X"],
      10: ["Q", "Z"]
    };
    var expected = {
      a: 1,
      b: 3,
      c: 3,
      d: 2,
      e: 1,
      f: 4,
      g: 2,
      h: 4,
      i: 1,
      j: 8,
      k: 5,
      l: 1,
      m: 3,
      n: 1,
      o: 1,
      p: 3,
      q: 10,
      r: 1,
      s: 1,
      t: 1,
      u: 1,
      v: 4,
      w: 4,
      x: 8,
      y: 4,
      z: 10
    };
    expect((0, _etl.transform)(old)).toEqual(expected);
  });
});