export class Character {
  constructor() {
    this.strength = Character.rollAbility(this);
    this.dexterity = Character.rollAbility(this);
    this.constitution = Character.rollAbility(this);
    this.intelligence = Character.rollAbility(this);
    this.wisdom = Character.rollAbility(this);
    this.charisma = Character.rollAbility(this);
    this.hitpoints = 10 + abilityModifier(this.constitution);
  }

  static rollAbility() {
    let diceRolls = [];

    for (let i = 0; i < 4; i++) {
      diceRolls.push(Math.floor(Math.random() * 5) + 1);
    }

    return diceRolls
      .sort()
      .slice(1)
      .reduce((acc, num) => acc + num, 0);
  }
}

export const abilityModifier = abilityScore => {
  if (abilityScore < 3) {
    throw new Error('Ability scores must be at least 3');
  }

  if (abilityScore > 18) {
    throw new Error('Ability scores can be at most 18');
  }

  return Math.floor((abilityScore - 10) / 2);
};
