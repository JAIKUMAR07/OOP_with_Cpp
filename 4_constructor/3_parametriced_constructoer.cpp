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
    name = n;
    account_number = acc_num;
    balance = bal;
  }
};

int main()
{
  customer c1("rahul", 12345, 1000);
  cout << c1.name << endl;
  cout << c1.account_number << endl;
  cout << c1.balance;

  return 0;
}
