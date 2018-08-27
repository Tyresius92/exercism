def handshake(code):
    result = []
    
    if code & 16:
        if code & 8:
            result.append('jump')
        if code & 4:
            result.append('close your eyes')
        if code & 2:
            result.append('double blink')
        if code & 1:
            result.append('wink')
    else:
        if code & 1:
            result.append('wink')
        if code & 2:
            result.append('double blink')
        if code & 4:
            result.append('close your eyes')
        if code & 8:
            result.append('jump')

    return result

def secret_code(actions):
    pass
