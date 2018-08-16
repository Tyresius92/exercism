class Garden(object):
    def __init__(self, diagram, students="Alice Bob Charlie David Eve "\
                                         "Fred Ginny Harriet Ileana"\
                                         "Joseph Kincaid Larry".split()):
        self.diagram = diagram.split("\n")
        self.students = students

    def plants(self, student):
        pass
