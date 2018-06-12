def rotate(text, key):
    translated = ''
    
    for symbol in text:
        if symbol.isalpha():
            ascii_num = ord(symbol) + key

            if symbol.isupper():
                if ascii_num > ord('Z'):
                    ascii_num -= 26
            elif symbol.islower():
                if ascii_num > ord('z'):
                    ascii_num -= 26

            symbol = chr(ascii_num)

        translated += symbol
        
    return translated
