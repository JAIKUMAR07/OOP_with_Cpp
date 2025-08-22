#include <iostream>

using namespace std;

class Human
{
public:
  string name;
};

class Engineer : public Human
{

  void money()
  {
    cout << "hello money" << endl;
  }

public:
  string specialization;

  Engineer()
  {
    cout << "hello engineer" << endl;
  }
  void work()
  {
    cout << "hello work" << endl;
  }
};

class Youtuber
{
public:
  string name;
};
int main()
{

  return 0;
}