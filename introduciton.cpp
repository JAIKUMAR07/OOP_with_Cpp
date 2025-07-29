#include <bits/stdc++.h>

using namespace std;

class student
{
private:
    string name;
    int roll;
    string grad;

public:
    void set_detail(string n, int r, string g)
    {
        name = n;
        roll = r;
        grad = g;
    }

    void get_detail(string pin)
    {
        if (pin == "123")
        {
            cout << "Name: " << name << endl;
            cout << "Roll: " << roll << endl;
            cout << "Grade: " << grad << endl;
        }
        else
        {
            cout << "you are not autheticate person ";
        }
    }
};

int main()
{
    student s1;
    s1.set_detail("John Doe", 101, "A");
    s1.get_detail("124");
    return 0;
}