class School(object):
    def __init__(self):
        self.all = {}

    def add_student(self, name, grade):
        if grade not in self.all.keys():
            self.all[grade] = [name]
        else:
            self.all[grade].append(name)

    def roster(self):
        return sorted(self.all.values())

    def grade(self, grade_number):
        pass
