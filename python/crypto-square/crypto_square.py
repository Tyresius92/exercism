from math import sqrt

def encode(plain_text):
    stripped = normalize_text(plain_text)

    row, col = get_crypto_square_dimensions(stripped)

    stripped = add_trailing_spaces(stripped, row, col)

    rows = []
    for i in range(col):
        letters = []
        for j in range(i, len(stripped), col):
            letters.append(stripped[j])
        rows.append(''.join(c for c in letters))

    result = ' '.join(word for word in rows)

    return result

def normalize_text(plain_text):
    result = ''.join(c for c in plain_text.lower() if c.isalnum())
    return result

def get_crypto_square_dimensions(text):
    root = sqrt(len(text))

    row = int(round(root))
    
    if row - root < 0: # rounded down
        col = row + 1
    else:              # rounded up
        col = row

    return row, col

def add_trailing_spaces(text, row, col):
    text = text.ljust(row * col)

    return text
