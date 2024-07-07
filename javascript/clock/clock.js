//
// This is only a SKELETON file for the 'Clock' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export class at {
  constructor(hours, minutes = 0) {
    while (minutes > 60) {
      hours += 1;
      minutes -= 60;
    }

    this.hours = hours;
    this.minutes = minutes;
  }

  toString() {
    return `${this.hours}:${this.minutes}`;
  }

  plus() {
    throw new Error("Remove this statement and implement this function");
  }

  minus() {
    throw new Error("Remove this statement and implement this function");
  }

  equals() {
    throw new Error("Remove this statement and implement this function");
  }
}
