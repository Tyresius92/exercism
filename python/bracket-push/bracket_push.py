def is_paired(input_string):
    stack = list()
    brackets = {'{': '}', '[': ']', '(': ')' }

    for i in input_string:
        if i in brackets.keys():
            stack.append(i)
            
        elif i in brackets.values():
            if not stack:
                return False
            
            stack_top = stack.pop()

            if i != brackets[stack_top]:
                return False

    return not stack
