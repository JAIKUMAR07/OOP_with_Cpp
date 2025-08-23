#include <iostream>
#include <vector>
using namespace std;
class Animal
{
public:
  virtual void speak() = 0;
};

class Dog : public Animal
{
public:
  void speak()
  {
    cout << "Bark" << endl;
  }

  void roti()
  {

    cout << "ye hai roti " << endl;
  }
};

class cat : public Animal
{
public:
  void speak()
  {
    cout << "meow" << endl;
  }
};

int main()
{

  Animal *p;
  vector<Animal *> animals;

  animals.push_back(new Dog());
  animals.push_back(new cat());

  animals.push_back(new Dog());
  animals.push_back(new cat());

  for (int i = 0; i < animals.size(); i++)
  {
    p = animals[i];
    p->speak();
  }

  return 0;
}