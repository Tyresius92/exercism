def prime_factors(natural_number):
    factors = []
    i = 2
    while natural_number != 1:
        if natural_number % i == 0:
            factors.append(i)
            natural_number = natural_number // i
        else:
            i += 1

    return factors
