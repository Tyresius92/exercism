class Queens {
  constructor(obj = { white: [0, 3], black: [7, 3] }) {
    if (obj.white[0] === obj.black[0] && obj.white[1] === obj.black[1]) {
      throw "Queens cannot share the same space";
    }

    this.white = obj.white;
    this.black = obj.black;
  }

  toString() {
    let board = [];

    for (let i = 0; i < 8; i++) {
      let row = [];
      for (let j = 0; j < 8; j++) {
        if (i === this.white[0] && j === this.white[1]) {
          row.push("W");
        } else if (i === this.black[0] && j === this.black[1]) {
          row.push("B");
        } else {
          row.push("_");
        }
      }
      row = row.join(" ");
      board.push(row);
    }

    return board.join("\n") + "\n";
  }

  canAttack() {
    return (
      this.white[0] === this.black[0] ||
      this.white[1] === this.black[1] ||
      Math.abs(this.white[0] - this.black[0]) ===
        Math.abs(this.white[1] - this.black[1])
    );
  }
}

export default Queens;
