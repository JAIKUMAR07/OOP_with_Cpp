#include <iostream>
#include <string>
using namespace std;

class customer
{

  string name;

  int *data;

public:
  customer()
  {

    name = "rohit";
    data = new int; // Dynamically allocate memory for data
    cout << "constructor is called when object is created" << endl;
  }

  ~customer()
  {
    cout << "destructor is called  when it is about to delete" << endl;
    delete data; // Free dynamically allocated memory
  }
};

int main()
{
  customer c1; // Object creation, constructor is called automatically
  // No need to call the constructor explicitly

  // You can add more functionality here, like setting name, account number, etc.
  return 0;
}