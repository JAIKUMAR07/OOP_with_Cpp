#include <iostream>

using namespace std;

class Student
{
public:
  string name;

  Student(string n)
  {
    name = n;
  }

  // Copy constructor

  void show()
  {
    cout << name << endl;
  }
};

int main()
{
  Student s1("Alice");
  Student s2(s1); // Calls copy constructor
  cout << s2.name;
}
