#include <iostream>

using namespace std;

class Human
{

protected:
  string name;
  int age;

public:
  ~Human()
  {
    cout << "hello human \n";
  }
  void work()
  {

    cout << "I  am working \n";
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  // Student(string name, int age, int roll_number, int fees)
  // {
  //   this->name = name;
  //   this->age = age;
  //   this->roll_number = roll_number;
  //   this->fees = fees;
  // }

  ~Student()
  {
    cout << "hello student";
  }
};

int main()
{

  Student s1;

  return 0;
}