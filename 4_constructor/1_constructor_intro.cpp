/*
✅ What is a Constructor?
A constructor is a special member function of a class that:

Has the same name as the class.

Automatically gets called when an object of the class is created.

Is used to initialize objects.

🎯 Real-World Analogy:
Think of a constructor like the registration desk at a hotel:

As soon as a guest (object) arrives (gets created), the registration desk (constructor) automatically collects their info (initializes values like name, room number, etc.).

No need to ask the guest to explicitly call registration – it just happens.




| Type                          | Description                                                       |
| ----------------------------- | ----------------------------------------------------------------- |
| **Default Constructor**       | No arguments, initializes to default values                       |
| **Parameterized Constructor** | Takes arguments to initialize object                              |
| **Copy Constructor**          | Initializes object using another object of same class             |
| **Constructor Overloading**   | Multiple constructors in the same class with different parameters |

*/

#include <iostream>
using namespace std;

class customer
{
private:
    string name;
    int account_number;
    int balance = 0;

public:
    // Constructor to initialize customer details
    customer()
    {
        cout << "constructor is called when object is created" << endl;
    }
};

int main()
{
    customer c1; // Object creation, constructor is called automatically
    // No need to call the constructor explicitly

    // You can add more functionality here, like setting name, account number, etc.
    return 0;
}