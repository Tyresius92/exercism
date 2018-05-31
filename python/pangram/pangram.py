import string

def is_pangram(sentence):
    letters = dict.fromkeys(string.ascii_lowercase, False)

    for i in sentence.lower():        
        letters[i] = True

    return all(value == True for value in letters.values())
