def board(ray):
    for i in range(len(ray)):
        
        if len(ray[i]) != len(ray[0]):
            raise ValueError('Invalid Board!')
        
        for j in range(len(ray[i])):
            if ray[i][j] == '*':
                continue
            else:
                num = count_mines(ray, i, j)
                if num != 0: 
                    ray[i] = ray[i][:j] + str(num) + ray[i][j + 1:]

    return ray

def count_mines(ray, i, j):
    count = 0
    
    for x in range(i - 1, i + 2):
        for y in range(j - 1, j + 2):
            
            if x < 0 or y < 0 or x >= len(ray) or y >= len(ray[i]):
                continue
            
            if ray[x][y] == '*':
                count += 1
            elif ray[x][y] == ' ' or str.isdigit(ray[x][y]):
                continue
            else:
                raise ValueError('Invalid Board!')

    return count
