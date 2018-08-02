def collatz_steps(number):
    if number <= 0:
        raise ValueError("That's a bad number. A BAD BAD NUMBER!")

    count = 0

    while number != 1:
        if number % 2 == 0:
            number //= 2
        else:
            number = number * 3 + 1
        count += 1

    return count
            
