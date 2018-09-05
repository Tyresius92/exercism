LINES = {1: "a Partridge in a Pear Tree.",
         2: "two Turtle Doves, ", 
         3: "three French Hens, ",
         4: "four Calling Birds, ",
         5: "five Gold Rings, ",
         6: "six Geese-a-Laying, ",
         7: "seven Swans-a-Swimming, ",
         8: "eight Maids-a-Milking, ",
         9: "nine Ladies Dancing, ",
         10: "ten Lords-a-Leaping, ",
         11: "eleven Pipers Piping, ",
         12: "twelve Drummers Drumming, "
         }
NTH = {1: "first ",
       2: "second ",
       3: "third ",
       4: "fourth ",
       5: "fifth ",
       6: "sixth ",
       7: "seventh ",
       8: "eighth ",
       9: "ninth ",
       10: "tenth ",
       11: "eleventh ",
       12: "twelfth "
       }

def recite(start_verse, end_verse):
    result = []
    for i in range(start_verse, end_verse + 1):
        new_string = "On the " + NTH[i] + "day of Christmas my true love gave to me, "

        for j in range(i, 0, -1):
            print(j)
            if j == 1 and i > 1:
                new_string = new_string + "and "
            new_string = new_string + LINES[j]

        result.append(new_string)

    print(result)

    return result
