#include <iostream>

using namespace std;

class
    exception
{

protected:
  string msg;

public:
  exception(string msg)
  {

    this->msg = msg;
  }

  string what() const
  {
    return msg;
  }
};
int main()
{

  try
  {
    int *p = new int[1000000000000000]; // Attempt to allocate a large array

    cout << "Memory allocation is successful" << endl;

    delete[] p;
  }
  catch (const exception &e)
  {
    cout << "Exception occurred: " << e.what() << endl;
  }
}