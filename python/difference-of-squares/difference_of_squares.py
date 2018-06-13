def square_of_sum(count):
    the_sum = 0

    for i in range(count + 1):
        the_sum = the_sum + i

    return the_sum * the_sum

def sum_of_squares(count):
    the_sum = 0

    for i in range(count + 1):
        the_sum = the_sum + (i**2)

    return the_sum

def difference(count):
    sum_of_sq = sum_of_squares(count)

    sq_of_sum = square_of_sum(count)

    return sq_of_sum - sum_of_sq
