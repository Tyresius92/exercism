class Allergies(object):

    def __init__(self, score):
        self.score = score

    def is_allergic_to(self, item):
        if item == 'eggs' and self.score & 1:
                return True
        elif item == 'peanuts' and self.score & 2:
            return True
        elif item == 'shellfish' and self.score & 4:
            return True
        elif item == 'strawberries' and self.score & 8:
            return True
        elif item == 'tomatoes' and self.score & 16:
            return True
        elif item == 'chocolate' and self.score & 32:
            return True
        elif item == 'pollen' and self.score & 64:
            return True
        elif item == 'cats' and self.score & 128:
            return True

        return False

    @property
    def lst(self):
        allergens = ['eggs', 'peanuts', 'shellfish', 'strawberries',
                     'tomatoes', 'chocolate', 'pollen', 'cats']

        allergic_to = []

        for allergen in allergens:
            if self.is_allergic_to(allergen):
                allergic_to.append(allergen)

        return allergic_to
