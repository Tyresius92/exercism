import re
import string

def hey(phrase):
    shouting = re.compile(r'^[A-Z\d,\t\n!\.%^*@#$(*^ ]+$')
    question = re.compile(r'.\?$')

    phrase = phrase.lstrip().rstrip()

    is_question = question.match(phrase)

    if phrase == "":
        return "Fine. Be that way!"
    
    if shouting.match(phrase):
        if is_question:
            return "Calm down, I know what I'm doing!"
        else:
            return "Whoa, chill out!"
    else:
        if is_question:
            return "Sure."

    return "Whatever."
