from math import sqrt

def get_aliquot_sum(number):
    if number == 1:
        return 0
    
    factors = []

    root = int(sqrt(number))

    for i in range(1, root + 1):
        if int(number) % i == 0:
            factors.append(i)
            if i != 1 and i*i != number:
                factors.append(int(number // i))

    return sum(factors)

def classify(number):
    if number < 1:
        raise ValueError("Can't take the aliquot sum of that!")
    
    aliquot = get_aliquot_sum(number)

    if aliquot < number:
        return "deficient"
    elif aliquot > number:
        return "abundant"
    else:
        return "perfect"
