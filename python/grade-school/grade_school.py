class School(object):
    def __init__(self):
        self.all = {}

    def add_student(self, name, grade):
        if grade not in self.all.keys():
            self.all[grade] = [name]
        else:
            self.all[grade].append(name)
            self.all[grade].sort()

    def roster(self):
        key_list = sorted(self.all.keys())
        result = []
        for key in key_list:
            result += self.all[key]

        return result

    def grade(self, grade_number):
        if grade_number in self.all: 
            return self.all[grade_number]
        else:
            return []
