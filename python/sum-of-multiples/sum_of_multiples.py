def sum_of_multiples(limit, multiples):
    numbers = set()
    
    for i in range(1, limit):
        for j in multiples:
            if i % j == 0:
                numbers.add(i)

    return sum(numbers)
