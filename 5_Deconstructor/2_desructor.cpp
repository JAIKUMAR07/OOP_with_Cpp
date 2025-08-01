#include <iostream>
#include <string>
using namespace std;

class customer
{

  string name;

  int *data;

public:
  customer(string name)
  {

    this->name = name;
    data = new int; // Dynamically allocate memory for data
    cout << "constructor is call " << name << endl;
  }

  ~customer()
  {

    cout << "destructor is called   ";
    cout << name << " \n";
    delete data; // Free dynamically allocated memory
  }
};

int main()
{
  customer c1("1"); // Object creation, constructor is called automatically
  customer c2("2");
  customer c3("3");
  // No need to call the constructor explicitly
  return 0;
}