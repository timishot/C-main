#!/usr/bin/python3

class BankAccount:
    def __init__(self, account_number, balance):
        self._account_number = account_number #Protect attribute
        self._balance = balance #Protected attribute

    def deposit(self, amount):
        if amount > 0:
            self._balance += amount
            print("Deposit successful.")
        else:
            print("Invalid amount for deposit.")


    def withdraw(self, amount):
        if amount > 0 and amount <= self._balance:
            self._balance -= amount
            print("Withdrawal successful.")
        else:
            print("Insufficient balance or invalid amount for withdrawal.")

    def get_balance(self):
        return self._balance


#Creating a BankAccount object
account = BankAccount("2139665604", 20000)

#Accessing the balance using a getter method
print("Current balance:", account.get_balance())

#Attempt to directly access the protected attribute
print("Account number:", account._account_number) #Not recommended, only for demonstration purposes

#Making a deposit
account.deposit(500)

#Attempting to directly modify the protected attribute

account._balance += 200 #Not recommended, only for demonstration purposes

# Attempting to withdraw
account.withdraw(1500)

# Accessing the balance using a getter method
print("Updated balance:", account.get_balance())


