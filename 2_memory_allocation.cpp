
#include <bits/stdc++.h>
using namespace std;

class student
{

public:
  string name;
  int age;
  string grade;
};

int main()
{
  student *s1 = new student;
  (*s1).name = "John Doe";
  (*s1).age = 20;
  (*s1).grade = "A";

  cout << s1->name << endl;
  cout << s1->age << endl;
  cout << s1->grade << endl;
  cout << "Size of student class: " << sizeof(*s1) << endl;
  return 0;
}