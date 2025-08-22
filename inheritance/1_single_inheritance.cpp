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

  void display()
  {

    cout << "mei hu human ";
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  Student(string name, int age, int roll_number, int fees)
  {
    this->name = name;
    this->age = age;
    this->roll_number = roll_number;
    this->fees = fees;
  }

  void display()
  {

    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Roll Number: " << roll_number << "\n";
    cout << "Fees: " << fees << "\n";
  }
};

int main()
{

  Student s1("John", 20, 101, 5000);

  s1.display();

  return 0;
}