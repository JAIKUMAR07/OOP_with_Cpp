#include <bits/stdc++.h>
using namespace std;

class customer
{

public:
  string name;
  int account_number;
  int balance;

  inline customer(string a, int b, int c) : name(a), account_number(b), balance(c)
  {
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
  c1.display(); // Displaying customer details using the display method

  return 0;
}