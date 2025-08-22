#include <iostream>

using namespace std;

class Person
{
protected:
  string name;

public:
  void introduce()
  {

    cout << "hello my name is " << name << endl;
  }
};

class Employee : public Person
{
protected:
  int salary;

public:
  void money_salary()
  {
    cout << "my monthly salary is " << salary << endl;
  }
};

class Manager : public Employee
{

public:
  string department;

  Manager(string name, int salary, string department)
  {

    this->name = name;
    this->department = department;
    this->salary = salary;
  }

  void work()
  {
    cout << "I am leading the department " << department << endl;
  }
};

int main()
{

  Manager m("Alice", 5000, "HR");
  m.introduce();
  m.money_salary();
  m.work();

  return 0;
}