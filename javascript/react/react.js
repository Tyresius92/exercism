class Queue {
  constructor() {
    this.queue = [];
  }

  isEmpty() {
    return this.queue.length === 0;
  }

  add(cell) {
    this.queue.push(cell);
  }

  addMany(cells) {
    this.queue = this.queue.concat(cells);
  }

  getNext() {
    return this.queue.shift();
  }
}

class Cell {
  constructor(number) {
    this.value = number;
    this.listeners = [];
    this.callbacks = [];
  }

  addListener(ComputeCell) {
    this.listeners.push(ComputeCell);
  }

  updateListeners() {
    const queue = new Queue();
    this.listeners.length !== 0 && queue.addMany(this.listeners);

    const processedCells = new Set([]);

    while (!queue.isEmpty()) {
      const cell = queue.getNext();

      cell.listeners.length !== 0 && queue.addMany(cell.listeners);

      cell.setValue();
      processedCells.add(cell);
    }

    processedCells.forEach(cell => {
      cell.fireCallbacks();
    });
  }

  addCallback(callbackCell) {
    this.callbacks.push(callbackCell);
  }

  removeCallback(callbackCell) {
    const indexToDelete = this.callbacks.findIndex(
      cell => cell === callbackCell
    );

    indexToDelete !== -1 && this.callbacks.splice(indexToDelete, 1);
  }

  fireCallbacks(hasChanged) {
    if (this.oldValue !== this.value) {
      this.callbacks.forEach(callbackCell => {
        callbackCell.setValue(this);
      });
    }
  }
}

export class InputCell extends Cell {
  constructor(newNumber) {
    super(newNumber);
  }

  setValue(newNumber) {
    this.value = newNumber;
    this.updateListeners();
  }
}

export class ComputeCell extends Cell {
  constructor(inputCellArray, callback) {
    super(callback(inputCellArray));

    this.inputCellArray = inputCellArray;
    this.storedProcedure = callback;

    this.inputCellArray.forEach(cell => {
      cell.addListener(this);
    });
  }

  setValue() {
    this.oldValue = this.value;
    this.value = this.storedProcedure(this.inputCellArray);
  }
}

export class CallbackCell {
  constructor(callback) {
    this.values = [];
    this.callback = callback;
  }

  setValue(cell) {
    this.values.push(this.callback(cell));
  }
}
