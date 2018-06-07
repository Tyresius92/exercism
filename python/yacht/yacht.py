# Score categories
# Change the values as you see fit
YACHT = "yacht"
ONES = "ones"
TWOS = "twos"
THREES = "threes"
FOURS = "fours"
FIVES = "fives"
SIXES = "sixes"
FULL_HOUSE = "full_house"
FOUR_OF_A_KIND = "four_of_a_kind"
LITTLE_STRAIGHT = [1, 2, 3, 4, 5]
BIG_STRAIGHT = [2, 3, 4, 5, 6]
CHOICE = "choice"


def score(dice, category):
    score = 0

    dice.sort()
    
    if category == YACHT:
        if len(set(dice)) == 1:
            score = 50
            
    elif category == ONES:
        for num in dice:
            if num == 1:
                score = score + num
                
    elif category == TWOS:
        for num in dice:
            if num == 2:
                score = score + num
                
    elif category == THREES:
        for num in dice:
            if num == 3:
                score = score + num
                
    elif category == FOURS:
        for num in dice:
            if num == 4:
                score = score + num
                
    elif category == FIVES:
        for num in dice:
            if num == 5:
                score = score + num
                
    elif category == SIXES:
        for num in dice:
            if num == 6:
                score = score + num
                
    elif category == FULL_HOUSE:
        if len(set(dice)) == 2:
            if (dice[1] != dice[2]) or (dice[2] != dice[3]):
                score = sum(dice)
                
    elif category == FOUR_OF_A_KIND:
        if len(set(dice)) <= 2:
            if dice[0] != dice[1]:
                del dice[0]
            elif dice[3] != dice[4]:
                del dice[4]
            score = sum(dice[:4])
            
    elif category == LITTLE_STRAIGHT:
        if dice == LITTLE_STRAIGHT:
            score = 30
            
    elif category == BIG_STRAIGHT:
        if dice == BIG_STRAIGHT:
            score = 30
            
    elif category == CHOICE:
        for num in dice:
            score = score + num
            
    else:
        raise ValueError("Invalid category.")

    return score
