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
};

int main()
{
  customer c1; // Object creation, constructor is called automatically
  // No need to call the constructor explicitly

  // You can add more functionality here, like setting name, account number, etc.
  return 0;
}
