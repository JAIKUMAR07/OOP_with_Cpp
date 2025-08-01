#include <iostream>
#include <string>
using namespace std;

class customer
{

  string name;
  int acc_num,
      balance;

public:
  static int total_customer;

public:
  customer(string a, int b, int c)
  {

    name = a;
    acc_num = b;
    balance = c;
    cout << "constructor is called for " << name << endl;
    total_customer++; // Increment the static member for each new customer
  }

  void display()
  {
    cout << "Name: " << name << ", Account Number: " << acc_num
         << ", Balance: " << balance << ", Total Customers: " << total_customer << endl;
  }

  void display_total()
  {
    cout << "Total customers: " << total_customer << endl;
  }
};

int customer::total_customer = 0; // Static member initialization

int main()
{

  customer c1("Alice", 1001, 5000); // Object creation, constructor is called automatically
                                    // Display details of customer c1
  customer c2("Bob", 1002, 3000);

  customer c3("Charlie", 1003, 7000);

  customer::total_customer = 5;
  cout << customer::total_customer; // Display total customers using static method

  return 0;
}