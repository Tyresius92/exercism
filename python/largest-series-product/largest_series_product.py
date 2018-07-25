def largest_product(series, size):
    if series == '' and size != 0:
        raise ValueError("Invalid span for empty string.")

    if series == '' and size == 0:
        return 1
    
    if size > len(series):
        raise ValueError("Size of substring must be less "\
                         "than length of series.")

    if size < 0:
        raise ValueError("Size cannot be negative.")
    
    largest = 0
    for i in range(len(series) - (size - 1)):
        curr_product = 1
        for j in range(size):
            curr_product *= int(series[i + j])

        print(i, curr_product)

        if curr_product > largest:
            largest = curr_product

    return largest
