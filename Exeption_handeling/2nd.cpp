#include <iostream>

using namespace std;

int main()
{

  int a, b;
  cin >> a >> b;

  try
  {

    if (b == 0)
      throw "Division by zero error";

    int c = a / b;
    cout << "ans" << c;
  }
  catch (const char *msg)
  {
    cout << "Error: " << msg << endl;
  }
  return 0;
}