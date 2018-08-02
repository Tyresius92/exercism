def is_valid_triangle(sides):
    for i in sides:
        if i <= 0 or i > sum(sides) - i:
            return False
    return True

def is_equilateral(sides):
    return is_valid_triangle(sides) and sides[0] == sides[1] == sides[2]


def is_isosceles(sides):
    sides.sort()  # if isosceles, gives us [a,b,b] or [a,a,b]; a may be == b

    if sides[0] != sides[1]:
        return is_valid_triangle(sides) and sides[1] == sides[2]
    else:
        return is_valid_triangle(sides) and sides[0] == sides[1]


def is_scalene(sides):
    return is_valid_triangle(sides) and sides[0] != sides[1] != sides[2]
