class Phone(object):
    def __init__(self, phone_number):
        num = ''.join(n for n in phone_number if n.isdigit())
        if num[0] == '1':
            num = num[1:]
            
        self.assert_valid_number(num)

        self.number = num
        self.area_code = num[0:3]


    def pretty(self):
        return "(" + self.number[0:3] + ") " + self.number[3:6] + "-" + self.number[6:10]

    
    def assert_valid_number(self, num):
        if len(num) != 10:
            raise ValueError("Incorrect number of digits.")
        if num[0] == '0' or num[0] == '1' or num[3] == '0' or num[3] == '1':
            raise ValueError("Invalid NANP Number!")
