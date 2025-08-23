#include <iostream>

using namespace std;

class Area
{

public:
  int calculatArea(int r)
  {
    return 3.14 * r * r;
  }

  int calculateArea(int a, int b)
  {
    return a * b;
  }
};
int main()
{
  Area a;
  cout << " circle " << a.calculatArea(5) << endl;
  cout << " rectangle " << a.calculateArea(5, 10) << endl;
  return 0;
}