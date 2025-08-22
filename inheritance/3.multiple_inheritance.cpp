#include <iostream>

using namespace std;

class Youtuber
{

public:
  int subscribers;

  Youtuber()
  {
    cout << "------------- mein hu youtube \n ";
  }
  void contentcreator()
  {

    cout << " I have a subscriber base of " << subscribers << endl;
  }
};

class Engineer
{

  void money()
  {
    cout << "I have money";
  }

public:
  string specialization;
  Engineer()
  {
    cout << "-------------Mein hu Engineer\n";
  }
  void work()
  {

    cout << "I have specialization in " << specialization << endl;
  }
};

class CodeTeacher : public Engineer, public Youtuber
{

public:
  string name;

  CodeTeacher(string n, string s, int sub)
  {
    name = n;
    specialization = s;
    subscribers = sub;

    cout << "------------- mein hu code teacher \n";
  }
  void show()
  {
    cout << "Name: " << name << endl;
    cout << "Specialization: " << specialization << endl;
    cout << "Subscribers: " << subscribers << endl;
  }
};

int main()
{
  CodeTeacher ct("John Doe", "Software Engineering", 10000);
  ct.work();
  ct.contentcreator();
  ct.show();

  return 0;
}