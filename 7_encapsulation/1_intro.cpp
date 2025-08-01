#include <iostream>
#include <string>
using namespace std;

class customer
{
private:
  string name;
  int bal;

public:
  customer(string name, int bal)
  {
    this->name = name;
    this->bal = bal;
  }

  void deposite(int amount)
  {
    if (amount > 0)
    {
      bal += amount;
      cout << "Deposited " << amount << " to " << name << "'s account. New balance: " << bal << endl;
    }
    else
    {
      cout << "Invalid deposit amount." << endl;
    }
  }
}; // Added missing semicolon here