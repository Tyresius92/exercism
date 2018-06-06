import string
import re
from collections import Counter

def word_count(phrase):
    words = re.split(';|_|\*|\n|,| |\t', phrase.lower())

    for i in range(len(words)):
        words[i] = words[i].lstrip(string.punctuation).rstrip(string.punctuation)
        
    words = filter(None, words)

    return dict(Counter(words))
