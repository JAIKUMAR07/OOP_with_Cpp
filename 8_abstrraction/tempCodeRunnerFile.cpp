#include <iostream>
#include <string>
using namespace std;

class customer
{
private:
  string name;
  int acc_num;
  int balance = 0; // Initialize balance to 0
  int gst = 0;     // Initialize GST to 0
public:
  customer(string a, int b)
  {
    name = a;
    acc_num = b;

    cout << "Constructor is called for " << name << endl;
  }

  void deposit(int amount)
  {
    if (amount > 0)
    {
      gst = amount * 0.18; // Assuming a GST of 18%
      balance += amount - gst;
      cout << "Deposited " << amount << " to " << name << "'s account. New balance: " << balance << endl;
    }
  }
  
  void displayBalance()
  {
    cout << name << "'s account balance: " << balance << endl;
  }
};

int main()
{
  // Create three customer objects
  customer A1("Customer A1", 1001);
  customer A2("Customer A2", 1002);
  customer A3("Customer A3", 1003);
  
  // Deposit 100 to A1's account
  A1.deposit(100);
  
  // Display all customers' balances
  cout << "\nAll Customer Balances:" << endl;
  A1.displayBalance();
  A2.displayBalance();
  A3.displayBalance();
  
  return 0;
}