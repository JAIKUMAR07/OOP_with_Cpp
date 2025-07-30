#include <bits/stdc++.h>

using namespace std;
class customer
{
public:
  string name;
  int account_number;
  int balance;

  customer()
  {
    cout << "constructor is called when object is created" << endl;
  }

  customer(string n, int acc_num, int bal)
  {
    this->name = n;
    this->account_number = acc_num;
    this->balance = bal;
    cout << "Parameterized constructor is called with values: " << n << ", " << acc_num << ", " << bal << endl;
  }

  void display()
  {
    cout << "Name: " << name << ", Account Number: " << account_number << ", Balance: " << balance << endl;
  }
};

int main()
{

  // yaha default constructor  call nhi ho rha jb parameter ko call kr rhe to
  customer c1("rahul", 12345, 1000);
  cout << c1.name << endl;
  cout << c1.account_number << endl;
  cout << c1.balance << endl;
  c1.display(); // Displaying customer details using the display method

  customer c2;  // Default constructor will be called here
  c2.display(); // Displaying garbage values since no parameters were passed
  return 0;
}
