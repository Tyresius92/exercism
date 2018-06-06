from collections import Counter

def word_count(phrase):
    words = phrase.lower().split()

    return dict(Counter(words))
