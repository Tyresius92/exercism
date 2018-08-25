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
        list_of_lists = self.all.values()
        result = []
        for grade_list in list_of_lists:
            for student in grade_list:
                result.append(student)

        return result

    def grade(self, grade_number):
        if grade_number in self.all: 
            return self.all[grade_number]
        else:
            return []
