from math import sqrt

def encode(plain_text):
    result = ''
    stripped = normalize_text(plain_text)

    row, col = get_crypto_square_dimensions(stripped)

    stripped = add_trailing_spaces(stripped, row, col)

    for i in range(col):
        if i != 0:
            result = result + ' '
        for j in range(i, len(stripped), col):
            result = result + stripped[j]

    return result

def normalize_text(plain_text):
    result = ''.join(c for c in plain_text.lower() if c.isalnum())
    return result

def get_crypto_square_dimensions(text):
    row = int(sqrt(len(text)))
    col = row

    while row * col < len(text):
        col += 1
        if row * col < len(text):
            row += 1

    return row, col

def add_trailing_spaces(text, row, col):
    while len(text) < row * col:
        text = text + ' '

    return text
