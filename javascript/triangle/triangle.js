export class Triangle {
  constructor(s1, s2, s3) {
    this.sides = [s1, s2, s3];
  }

  #isValidTriangle() {
    return (
      this.sides.every(this.#sideHasPositiveLength) &&
      this.sides.every(side =>
        this.#sideIsShorterThanOtherTwoSidesCombined(side, this.#perimeter)
      )
    );
  }

  #sideHasPositiveLength(side) {
    return side > 0;
  }

  #sideIsShorterThanOtherTwoSidesCombined(side, perimeter) {
    return side < 0.5 * perimeter;
  }

  get #perimeter() {
    return this.sides.reduce((acc, curr) => acc + curr, 0);
  }

  get #matchingSides() {
    const setSize = new Set(this.sides).size;
    if (setSize === 3) {
      // we have three unique sides, so none match.
      return 0;
    } else {
      return 4 - setSize;
    }
  }

  get isEquilateral() {
    return this.#isValidTriangle() && this.#matchingSides === 3;
  }

  get isIsosceles() {
    return this.#isValidTriangle() && this.#matchingSides >= 2;
  }

  get isScalene() {
    return this.#isValidTriangle() && this.#matchingSides === 0;
  }
}
