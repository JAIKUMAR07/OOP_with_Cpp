#include <iostream>
using namespace std;

class Human
{
protected:
  string name;
  int age;

public:
  Human(string name, int age)
  {
    this->name = name;
    this->age = age;
  }

  void display()
  {
    cout << "I am a human" << endl;
  }
};

class Student : public Human
{
  int roll_number, fees;

public:
  // Call Human constructor in initializer list
  Student(string name, int age, int roll_number, int fees)
      : Human(name, age)
  {
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

class Teacher : public Human
{
  int salary;

public:
  // Call Human constructor in initializer list
  Teacher(string name, int age, int salary)
      : Human(name, age)
  {
    this->salary = salary;
  }

  void display()
  {
    cout << name << " " << age << " " << salary << endl;
  }
};

int main()
{
  Student s1("John", 20, 101, 5000);
  s1.display();

  Teacher t1("Alice", 30, 50000);
  t1.display();

  return 0;
}
