from collections import OrderedDict

class Allergies(object):
    allergens = OrderedDict([("eggs", 1),
                             ("peanuts", 2),
                             ("shellfish", 4),
                             ("strawberries", 8),
                             ("tomatoes", 16),
                             ("chocolate", 32),
                             ("pollen", 64),
                             ("cats", 128)])
    
    def __init__(self, score):
        self.score = score
        self._lst = [a for a in self.allergens
                         if self.score & self.allergens[a] != 0]

    def is_allergic_to(self, item):
        return self.allergens[item] & self.score != 0

    @property
    def lst(self):
        return self._lst
