class Garden(object):

    plant_key = {'V': "Violets", "C": "Clover", "G": "Grass", "R": "Radishes"}
    
    def __init__(self, diagram, students="Alice Bob Charlie David Eve "\
                                         "Fred Ginny Harriet Ileana "\
                                         "Joseph Kincaid Larry".split()):
        self.diagram = diagram.split("\n")
        self.students = sorted(students)

    def plants(self, student):
        kid_index = self.students.index(student)

        result = []

        result.append(self.plant_key[self.diagram[0][kid_index * 2]])
        result.append(self.plant_key[self.diagram[0][(kid_index * 2) + 1]])
        result.append(self.plant_key[self.diagram[1][kid_index * 2]])
        result.append(self.plant_key[self.diagram[1][(kid_index * 2) + 1]])

        return result
