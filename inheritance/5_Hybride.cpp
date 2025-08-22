#include <iostream>
using namespace std;

// Base class
class Student
{
public:
  void print()
  {
    cout << "I am a student" << endl;
  }
};

class Male
{
public:
  void Maleprint()
  {
    cout << "I am a male" << endl;
  }
};

class Female
{
public:
  void Femaleprint()
  {
    cout << "I am a female" << endl;
  }
};

// Derived classes
class Boy : public Student, public Male
{
public:
  void Boyprint()
  {
    cout << "I am a boy" << endl;
  }
};

class Girl : public Student, public Female
{
public:
  void Girlprint()
  {
    cout << "I am a girl" << endl;
  }
};

int main()
{
  Girl g1;
  g1.print();       // from Student
  g1.Femaleprint(); // from Female
  g1.Girlprint();   // Girl's own

  cout << "----" << endl;

  Boy b1;
  b1.print();     // from Student
  b1.Maleprint(); // from Male
  b1.Boyprint();  // Boy's own

  return 0;
}
