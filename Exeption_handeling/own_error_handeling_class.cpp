#include <bits/stdc++.h> // Includes all standard C++ headers (not recommended for large projects)
using namespace std;

// Class to represent a bank customer

class InvalidAmmountError : public runtime_error
{
public:
  InvalidAmmountError(const string &msg) : runtime_error(msg);
};
class Customer
{
  string name;        // Customer's name
  int balance;        // Customer's account balance
  int account_number; // Customer's account number

public:
  // Constructor to initialize a Customer object
  Customer(string name, int balance, int account_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  // Function to display current balance
  void mybalance()
  {
    cout << "Current balance is \n"
         << balance;
  }

  // Function to deposit money into account
  void deposit(int ammount)
  {
    if (ammount > 0) // Deposit should be positive
    {
      balance += ammount;                  // Add deposit amount to balance
      cout << ammount << " is debited \n"; // Inform user
    }
    else
    {
      throw InvalidAmmountError("invalid ammount \n"); // Throw exception if amount is invalid
    }
  }

  // Function to withdraw money from account
  void withdraw(int ammount)
  {
    if (ammount > 0 && ammount <= balance) // Check for valid withdrawal
    {
      balance -= ammount;                             // Deduct amount from balance
      cout << ammount << " is credit successfully\n"; // Inform user
    }
    else if (ammount < 0) // Negative withdrawal is invalid
    {
      cout << "Amount should be greater than 0\n";
    }
    else // Withdrawal exceeds balance
    {
      throw "your balance is low \n"; // Throw exception if insufficient funds
    }
  }
};

int main()
{
  // Create a customer object with name "rahul", balance 5000, account number 10
  Customer c1("rahul", 5000, 10);

  try
  {
    c1.deposit(100); // Deposit 100 into account
    c1.mybalance();  // Show current balance

    c1.withdraw(10000); // Attempt to withdraw more than balance
  }
  catch (const InvalidAmmountError &msg) // Catch exceptions thrown by deposit or withdraw
  {
    cerr << "\nError: " << msg.what() << endl; // Display error message
  }

  return 0; // End of program
}
