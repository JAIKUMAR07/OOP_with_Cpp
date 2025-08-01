#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
  string name;
  int accountNumber;
  int balance;

  // Static members
  static int totalCustomers;
  static int totalBalance;

public:
  // Constructor
  Customer(string name, int accountNumber, int initialBalance)
      : name(name), accountNumber(accountNumber), balance(initialBalance)
  {
    cout << "Constructor called for " << name << endl;
    totalCustomers++;
    totalBalance += balance;
  }

  // Instance methods
  void deposit(int amount)
  {
    balance += amount;
    totalBalance += amount;
  }

  void withdraw(int amount)
  {
    if (amount <= balance)
    {
      balance -= amount;
      totalBalance -= amount;
    }
    else
    {
      cout << "Insufficient balance for withdrawal." << endl;
    }
  }

  void display() const
  {
    cout << "Name: " << name
         << ", Account Number: " << accountNumber
         << ", Balance: " << balance
         << ", Total Customers: " << totalCustomers << endl;
  }

  // Static methods
  static void displayTotalCustomers()
  {
    cout << "Total customers: " << totalCustomers << endl;
  }

  static int getTotalBalance()
  {
    return totalBalance;
  }
};

// Static member initialization
int Customer::totalCustomers = 0;
int Customer::totalBalance = 0;

int main()
{
  // Create first customer
  Customer c1("Alice", 1001, 5000);
  c1.display();
  cout << "Total balance: " << Customer::getTotalBalance() << endl;

  // Create second customer and make transactions
  Customer c2("Charlie", 1003, 7000);
  c2.deposit(2000);

  cout << "After deposit, ";
  c2.display();

  // Show totals using static methods
  cout << "Total customers: ";
  Customer::displayTotalCustomers();
  cout << "Total balance: " << Customer::getTotalBalance() << endl;

  return 0;
}
