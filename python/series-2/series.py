def slices(series, length):
    if length > len(series) or length <= 0:
        raise ValueError("That set of arguments is no good my dude!")

    result = []

    for i in range(len(series) - (length - 1)):
        result.append(series[i:i+length])

    return result
