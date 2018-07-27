def on_square(integer_number):

    if integer_number not in range(1, 65):
        raise ValueError("That's not a chessboard square number!")
    
    return 2**(integer_number - 1)


def total_after(integer_number):
    
    if integer_number not in range(1, 65):
        raise ValueError("That's not a chessboard square number!")
    
    total = 0

    for i in range(1, integer_number + 1):
        total += on_square(i)

    return total
        
