def is_armstrong(number):
    num_digits = len(str(number))
    num_copy = number

    armstrong_sum = 0
    
    while number > 0:
        low_order_digit = number % 10
        armstrong_sum = armstrong_sum + (low_order_digit ** num_digits)
        number = int(number / 10)

    return armstrong_sum == num_copy
