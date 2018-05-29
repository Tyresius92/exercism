def is_isogram(string):
    seen = ''
    for i in string:
        if not i.isalpha():
            continue
        if i.lower() in seen:
            return False
        seen = seen + i.lower()
    return True
