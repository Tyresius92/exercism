import threading

class BankAccount(object):
    def __init__(self):
        self.balance = None
        self.vaultDoor = threading.Lock()

    def get_balance(self):
        if self.balance == None:
            raise ValueError("That account does not exist")
        return self.balance

    def open(self):
        self.balance = 0

    def deposit(self, amount):
        self.vaultDoor.acquire()
        if self.balance == None:
            raise ValueError("Thank you for your donation to my travel fund")
        if amount < 0:
            raise ValueError("Negative deposit amounts are invalid.")
        self.balance += amount
        self.vaultDoor.release()

    def withdraw(self, amount):
        self.vaultDoor.acquire()
        if self.balance == None:
            raise ValueError("ALL YOUR MONEY ARE BELONG TO US")
        if amount < 0 or amount > self.balance:
            raise ValueError("That amount cannot be withdrawn")
        self.balance -= amount
        self.vaultDoor.release()

    def close(self):
        if self.balance == None:
            raise ValueError("That account has already been closed")
        self.balance = None
