def verify(isbn):
    nums = []
    
    for i in isbn:
        print(str(i))
        try:
            if i == '-':
                continue
            elif i == ('X' or 'x'):
                if len(nums) != 9:
                    return False
                nums.append(10)
            else:
                nums.append(int(i))
        except:
            return False

    if len(nums) != 10:
        return False
    
    result = 0

    for i in range(10):
        result += nums[i] * (i + 1)
        print("nums = " + str(nums[i]), end='')
        print("; nums * i = " + str(nums[i] * (i + 1)), end='')
        print("; i = " + str(i), end='')
        print("; result = " + str(result))
        
    final = result % 11

    print(str(final == 0))

    return (result % 11 == 0)
