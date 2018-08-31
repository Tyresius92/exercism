from collections import defaultdict

class School(object):
    def __init__(self):
        self.all = defaultdict(list)

    def add_student(self, name, grade):
        self.all[grade].append(name)
        self.all[grade].sort()

    def roster(self):
        key_list = sorted(self.all.keys())
        result = [name for key in key_list for name in self.all[key]]
        return result

    def grade(self, grade_number):
        return self.all[grade_number]
