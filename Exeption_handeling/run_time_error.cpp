#include <iostream>  // For input/output
#include <stdexcept> // For runtime_error
#include <string>    // For string class
using namespace std;

// Class to represent a bank customer
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
    cout << "Current balance is: "
         << balance << endl;
    // Function to deposit money into account
    void deposit(int amount)
    {
      if (amount > 0) // Deposit should be positive
      {
        balance += amount;                   // Add deposit amount to balance
        cout << amount << " is credited \n"; // Inform user (deposit = credit)
      }
      else
      {
        throw runtime_error("invalid amount \n"); // Throw exception if amount is invalid
      }
    }
  }
  // Function to withdraw money from account
  void withdraw(int amount)
  {
    if (amount > 0 && amount <= balance) // Check for valid withdrawal
    {
      balance -= amount;                              // Deduct amount from balance
      cout << amount << " is debited successfully\n"; // Inform user (withdrawal = debit)
    }
    else if (amount < 0) // Negative withdrawal is invalid
    {
      throw runtime_error("Amount should be greater than 0\n"); // Throw exception for consistency
    }
    else // Withdrawal exceeds balance
    {
      throw runtime_error("your balance is low \n"); // Throw exception if insufficient funds
    }
  }
}
}
}
;

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
  catch (const runtime_error &msg) // Catch exceptions thrown by deposit or withdraw
  {
    cerr << "\nError: " << msg.what() << endl; // Display error message
  }

  return 0; // End of program
}
