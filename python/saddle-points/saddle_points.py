
def get_column(arr, col):
    column = []

    for i in range(len(arr)):
        column.append(arr[i][col])

    return column

def is_regular_array(arr):
    if not arr:
        return True
    
    len_first_row = len(arr[0])

    for row in arr:
        if len(row) != len_first_row:
            return False

    return True

def saddle_points(matrix):
    if not is_regular_array(matrix):
        raise ValueError("Invalid matrix passed to saddle_points()")
    
    saddles = set()

    for i in range(len(matrix)):
        for j in range(len(matrix[i])):
            num = matrix[i][j]

            col = get_column(matrix, j)

            if num == min(col) and num == max(matrix[i]):
                saddles.add((i, j))

    return saddles
