def sum_of_multiples(limit, multiples):
    numbers = set()

    for m in multiples: 
        numbers.update(range(m, limit, m))

    return sum(numbers)
