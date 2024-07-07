const NUMBER_OF_ROWS_AND_COLUMNS = 8;
const MAX_ROW_COLUMN_INDEX = 7;
const MIN_ROW_COLUMN_INDEX = 0;

const WHITE_QUEEN_DEFAULT_START_POSITION = [7, 3];
const BLACK_QUEEN_DEFAULT_START_POSITION = [0, 3];

export class QueenAttack {
  constructor({
    white = WHITE_QUEEN_DEFAULT_START_POSITION,
    black = BLACK_QUEEN_DEFAULT_START_POSITION,
  } = {}) {
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

  _isOnBoard = ([row, col]) =>
    row >= MIN_ROW_COLUMN_INDEX &&
    col >= MIN_ROW_COLUMN_INDEX &&
    row <= MAX_ROW_COLUMN_INDEX &&
    col <= MAX_ROW_COLUMN_INDEX;

  _getPieceInPosition(position) {
    const { white, black } = this;

    if (this._isSamePosition(position, white)) {
      return "W";
    } else if (this._isSamePosition(position, black)) {
      return "B";
    } else {
      return "_";
    }
  }

  toString() {
    let board = [];

    for (let i = MIN_ROW_COLUMN_INDEX; i < NUMBER_OF_ROWS_AND_COLUMNS; i++) {
      let row = [];
      for (let j = MIN_ROW_COLUMN_INDEX; j < NUMBER_OF_ROWS_AND_COLUMNS; j++) {
        row.push(this._getPieceInPosition([i, j]));
      }
      row = row.join(" ");
      board.push(row);
    }

    return board.join("\n");
  }

  _canQueensAttackDiagonally() {
    const {
      white: [whiteRow, whiteCol],
      black: [blackRow, blackCol],
    } = this;

    return Math.abs(whiteRow - blackRow) === Math.abs(whiteCol - blackCol);
  }

  get canAttack() {
    const {
      white: [whiteRow, whiteCol],
      black: [blackRow, blackCol],
    } = this;

    return (
      whiteRow === blackRow ||
      whiteCol === blackCol ||
      this._canQueensAttackDiagonally()
    );
  }
}
