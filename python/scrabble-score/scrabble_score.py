def score(word):
    total = 0
    
    for letter in word:
        c = letter.lower()
        
        if c in "aeioulnrst":
            total += 1
        elif c in "dg":
            total += 2
        elif c in "bcmp":
            total += 3
        elif c in "fhvwy":
            total += 4
        elif c in "k":
            total += 5
        elif c in "jx":
            total += 8
        elif c in "qz":
            total += 10
        else:
            raise ValueError("%c is not a letter!" % c)

    return total
