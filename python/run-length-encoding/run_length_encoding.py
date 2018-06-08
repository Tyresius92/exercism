def decode(string):
    decoded = ''
    num_as_str = ''

    for i in range(len(string)):
        if string[i].isdigit():
            num_as_str = num_as_str + string[i]
        else:
            if num_as_str == '':
                num_as_str = '1'
            decoded = decoded + (string[i] * int(num_as_str))
            num_as_str = ''
        
    return decoded


def encode(string):
    encoded = ''
    num = 0

    for i in range(len(string)):
        if (i == (len(string) - 1)):
            if num == 0:
                encoded = encoded + string[i]
            else:
                encoded = encoded + str(num + 1) + string[i]
                num = 0
        elif string[i] != string[i+1]:
            if num == 0:
                encoded = encoded + string[i]
            else:
                encoded = encoded + str(num + 1) + string[i]
                num = 0
        else:
            num = num + 1

    return encoded
