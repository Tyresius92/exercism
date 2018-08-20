class Garden(object):

    plant_key = {'V': "Violets", "C": "Clover", "G": "Grass", "R": "Radishes"}

    default_kids = "Alice Bob Charlie David Eve Fred Ginny "\
                   "Harriet Ileana Joseph Kincaid Larry".split()
    
    def __init__(self, diagram, students=None):
        self.diagram = diagram.split("\n")
        
        if students == None:
            students = self.default_kids
        self.students = sorted(students)

    def plants(self, student):
        kid_index = self.students.index(student) * 2

        return [
            self.plant_key[self.diagram[0][kid_index]],
            self.plant_key[self.diagram[0][kid_index + 1]],
            self.plant_key[self.diagram[1][kid_index]],
            self.plant_key[self.diagram[1][kid_index + 1]]
            ]

