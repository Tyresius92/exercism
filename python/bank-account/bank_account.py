class BankAccount(object):
    def __init__(self):
        self.balance = None

    def get_balance(self):
        if self.balance == None:
            raise ValueError("That account does not exist")
        return self.balance

    def open(self):
        self.balance = 0

    def deposit(self, amount):
        if self.balance == None:
            raise ValueError("Thank you for your donation to my travel fund")
        if amount < 0:
            raise ValueError("Negative deposit amounts are invalid.")
        self.balance += amount

    def withdraw(self, amount):
        if self.balance == None:
            raise ValueError("ALL YOUR MONEY ARE BELONG TO US")
        if amount < 0 or amount > self.balance:
            raise ValueError("That amound cannot be withdrawn")
        self.balance -= amount

    def close(self):
        if self.balance == None:
            raise ValueError("That account has already been closed")
        self.balance = None
