class Allergies(object):

    

    def __init__(self, score):
        self.score = score
        self.allergens = {"eggs": 1,
                          "peanuts": 2,
                          "shellfish": 4,
                          "strawberries": 8,
                          "tomatoes": 16,
                          "chocolate": 32,
                          "pollen": 64,
                          "cats": 128 }
        self.allergic_to = None

    def is_allergic_to(self, item):
        if self.score & self.allergens[item]:
            return True
        
        return False

    @property
    def lst(self):
        if self.allergic_to == None:
            self.allergic_to = []
            
            for allergen in self.allergens.keys():
                if self.is_allergic_to(allergen):
                    self.allergic_to.append(allergen)

        return self.allergic_to
