def hey(phrase):    
    phrase = phrase.strip()

    if phrase == "":
        return "Fine. Be that way!"

    if phrase.endswith('?'):
        if phrase.isupper():
            return "Calm down, I know what I'm doing!"
        else:
            return "Sure."
    else:
        if phrase.isupper():
            return "Whoa, chill out!"
        else:
            return "Whatever."
