export class Matrix {
  constructor(input) {
    this._rows = input.split("\n").map(row => {
      return row.split(" ").map(numStr => Number(numStr));
    });

    this._columns = this._rows[0].map((num, index) =>
      this._rows.map(row => row[index])
    );
  }

  get rows() {
    return this._rows;
  }

  get columns() {
    return this._columns;
  }
}
