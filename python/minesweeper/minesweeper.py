def board(input_board_array):
    for i in range(len(input_board_array)):
        for j in range(len(input_board_array[i])):
            if input_board_array[i][j] == '*':
                continue
            else:
                num = count_mines(input_board_array, i, j)
                input_board_array[i] = input_board_array[i][:j] + str(num) + input_board_array[i][j:]

def count_mines(in_ray, i, j):
    count = 0
    for x in range(i - 1, i + 2):
        for y in range(j - 1, j + 2):
            if x <= 0 or y <= 0 or x >= len(in_ray) or y >= len(in_ray[i]):
                continue
            if in_ray[x][y] == '*':
                count += 1

    return count
