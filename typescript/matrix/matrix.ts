type TwoDimensionArray<T> = T[][];

export class Matrix {
  private _rows: TwoDimensionArray<number>;
  private _columns: TwoDimensionArray<number>;

  constructor(input: string) {
    this._rows = input.split("\n").map(row => {
      return row.split(" ").map(numStr => Number(numStr));
    });

    this._columns = this._rows[0].map((_, index) =>
      this._rows.map(row => row[index])
    );
  }

  get rows(): TwoDimensionArray<number> {
    return this._rows;
  }

  get columns(): TwoDimensionArray<number> {
    return this._columns;
  }
}
