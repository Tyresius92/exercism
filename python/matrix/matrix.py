class Matrix(object):
    def __init__(self, matrix_string):
        split_matrix = matrix_string.split('\n')
        for i in range(len(split_matrix)):
            split_matrix[i] = split_matrix[i].split()
            for j in range(len(split_matrix[i])):
                split_matrix[i][j] = int(split_matrix[i][j])

        self.matrix = split_matrix

    def row(self, index):
        return self.matrix[index]

    def column(self, index):
        return [self.matrix[i][index] for i in range(len(self.matrix))]
