#include <bits/stdc++.h>

using namespace std;

class Customer
{
  string name;
  int balance, account_number;

public:
  Customer(string name, int balance, int account_number)
  {
    this->name = name;
    this->balance = balance;
    this->account_number = account_number;
  }

  void mybalance()
  {
    cout << "current balance is \n"
         << balance;
  }
  void deposit(int ammount)
  {

    if (ammount > 0)
    {
      balance += ammount;

      cout << ammount << " is debited \n";
    }
    else
    {
      cout << "invalid ammount \n";
    }
  }

  void withdraw(int ammount)
  {

    if (ammount > 0 && ammount <= balance)
    {
      balance -= ammount;
      cout << ammount << " is credit  successfully\n";
    }
    else if (ammount < 0)
    {
      cout << "amount should be greater than 0\n";
    }
    else
    {
      cout << "your balance is low \n";
    }
  }
};
int main()
{

  Customer c1("rahul", 5000, 10);

  c1.deposit(100);
  c1.mybalance();

  c1.withdraw(10000);

  return 0;
}