export class QueenAttack {
  constructor({ white = [7, 3], black = [0, 3] } = {}) {
    if (this._isSamePosition(white, black)) {
      throw "Queens cannot share the same space";
    } else if (!this._isOnBoard(white) || !this._isOnBoard(black)) {
      throw "Queen must be placed on the board";
    }

    this.white = white;
    this.black = black;
  }

  _isSamePosition = ([row1, col1], [row2, col2]) =>
    row1 === row2 && col1 === col2;

  _isOnBoard = ([row, col]) => row >= 0 && row <= 7 && col >= 0 && col <= 7;

  toString() {
    const { white, black } = this;

    let board = [];

    for (let i = 0; i < 8; i++) {
      let row = [];
      for (let j = 0; j < 8; j++) {
        if (this._isSamePosition([i, j], white)) {
          row.push("W");
        } else if (this._isSamePosition([i, j], black)) {
          row.push("B");
        } else {
          row.push("_");
        }
      }
      row = row.join(" ");
      board.push(row);
    }

    return board.join("\n");
  }

  get canAttack() {
    const {
      white: [whiteRow, whiteCol],
      black: [blackRow, blackCol],
    } = this;

    return (
      whiteRow === blackRow ||
      whiteCol === blackCol ||
      // to be diagonal, we have to move the same number of columns as rows
      // we take the absolute value of each because we don't care about direction
      Math.abs(whiteRow - blackRow) === Math.abs(whiteCol - blackCol)
    );
  }
}
