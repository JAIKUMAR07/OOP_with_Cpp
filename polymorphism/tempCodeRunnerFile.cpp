#include <iostream>

using namespace std;
class Animal
{
public:
  Animal()
  {
  }
  virtual void speak()
  {
    cout << "hu hu hu hu " << endl;
  }
};

class Dog : public Animal
{
public:
  void speak()
  {
    cout << "Bark" << endl;
  }
};

int main()
{
  Animal *p;
  p = new Dog();
  p->speak();
  delete p; // Free the allocated memory

  return 0;
}