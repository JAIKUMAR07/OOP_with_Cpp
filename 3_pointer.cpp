#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Alice";
    s1.age = 20;

    Student *ptr = &s1; // pointer to object

    // Access using pointer
    cout << "Using -> operator:" << endl;
    ptr->display();            // function call
    cout << ptr->name << endl; // variable access

    Student *s2 = new Student; // dynamically allocated object
    (*s2).name = "Boby";       // access using dereferencing
    (*s2).age = 24;
    cout << "Using * operator:" << endl;

    cout << "Name: " << (*s2).name << ", Age: " << (*s2).age << endl; // variable access
    s2->display();                                                    // function call
    return 0;
}
