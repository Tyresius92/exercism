def gcd(a, b):
    while b != 0:
        a, b = b, a % b
        
    return a

def primitive_triplets(number_in_triplet):
    if number_in_triplet % 4 != 0:
        raise ValueError("Multiple of 4 expected as argument to primitive_triplets.")

    mn = []

    for n in range(1, number_in_triplet):
        for m in range(n + 1, number_in_triplet):
            if 2 * m * n == number_in_triplet and gcd(m, n) == 1:
                mn.append((m, n))

    triplets = set()

    for m, n in mn:
        t = [m**2 - n**2, number_in_triplet, m**2 + n**2]
        t.sort()
        triplets.add(tuple(t))

    return triplets


def triplets_in_range(range_start, range_end):
    triplets = set()

    for i in range(range_end + 1):
        if i % 4 != 0:
            continue
        triplets = triplets.union(primitive_triplets(i))

    non_primitive = set()

    for (a, b, c) in triplets:
        i = 1
        x, y, z = a, b, c
        while z <= range_end:
            x, y, z = a*i, b*i, c*i
            non_primitive = non_primitive.union(set([(x, y, z)]))
            
            i += 1

    triplets = triplets.union(non_primitive)

    invalid = set()
    for (a, b, c) in triplets:
        if a < range_start or c > range_end:
            invalid.add((a, b, c))

    triplets = triplets - invalid

    return triplets
    


def is_triplet(triplet):
    t = list(triplet)
    t.sort()
    
    if t[0]**2 + t[1]**2 == t[2]**2:
        return True
    else:
        return False
