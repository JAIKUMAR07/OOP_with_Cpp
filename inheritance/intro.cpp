#include <iostream>

using namespace std;

class human
{
private:
  int a;

protected:
  int b;

public:
  int c;

  void fun()
  {
    a = 10;
    b = 20;
    c = 30;
    cout << a << " " << b << " " << c;
  }
};

int main()
{

  human rohit;

  // rohit.b = 10; // Protected member can be accessed
  rohit.c = 20; // Public member can be accessed

  rohit.fun(); // Function can access private and protected members
  return 0;
}