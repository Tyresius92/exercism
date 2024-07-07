const ALPHABET = [..."ABCDEFGHIJKLMNOPQRSTUVWXYZ"];

const swapArrayElements = <Type>(
  array: Array<Type>,
  indexOne: number,
  indexTwo: number
): Array<Type> => {
  if (
    indexOne < 0 ||
    indexOne >= array.length ||
    indexTwo < 0 ||
    indexTwo >= array.length
  ) {
    throw new Error(`Array index out of bounds: 
    array.length: ${array.length}
    indexOne: ${indexOne}
    indexTwo: ${indexTwo}
`);
  }

  const temp = array[indexOne];
  array[indexOne] = array[indexTwo];
  array[indexTwo] = temp;

  return array;
};

const moveElementToEndOfArray = <Type>(
  array: Array<Type>,
  index: number
): Array<Type> => {
  return swapArrayElements(array, index, array.length - 1);
};

export class Robot {
  private _name: string;

  private static generateAllNames = (): string[] => {
    const list: string[] = [];

    ALPHABET.forEach(firstLetter => {
      ALPHABET.forEach(secondLetter => {
        for (let i = 0; i < 1000; i++) {
          list.push(
            `${firstLetter}${secondLetter}${i.toString().padStart(3, "0")}`
          );
        }
      });
    });

    return list;
  };

  private static _availableNames: string[] = Robot.generateAllNames();

  constructor() {
    this._name = this._getCleanName();
  }

  private _getCleanName(): string {
    const randomIndex = Math.floor(
      Math.random() * Robot._availableNames.length
    );

    Robot._availableNames = moveElementToEndOfArray(
      Robot._availableNames,
      randomIndex
    );

    let newName = Robot._availableNames.pop() ?? "";
    return newName;
  }

  public get name(): string {
    return this._name;
  }

  public resetName(): void {
    this._name = this._getCleanName();
  }

  public static releaseNames(): void {
    this._availableNames = Robot.generateAllNames();
  }
}
