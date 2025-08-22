#include <iostream>

using namespace std;

class Human
{
public:
  string name;
  int age, weight;
};

class Student : protected Human
{
private:
  int roll_no;
  int fees;

public:
  void fun(string n, int a, int w)
  {
    name = n;
    age = a;
    weight = w;
    cout << n << " " << a << " " << w;
  }
};

int main()
{
  Student s1;

  s1.fun("jai", 12, 133);

  return 0;
}