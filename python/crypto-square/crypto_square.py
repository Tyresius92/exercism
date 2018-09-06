from math import sqrt

def encode(plain_text):
    result = ''
    stripped = normalize_text(plain_text)
    root = int(sqrt(len(stripped)))

    if root == 0:
        return result

    if root * root < len(stripped):
        root = root + 1
        print(root)
        while len(stripped) < (root)**2:
            stripped = stripped + ' '
    print(stripped + '.')

    for i in range(root):
        if i != 0:
            result = result + ' '
        for j in range(i, len(stripped), root):
            result = result + stripped[j]
            print(result)

    return result

def normalize_text(plain_text):
    result = ''.join(c for c in plain_text.lower() if c.isalnum())
    return result
