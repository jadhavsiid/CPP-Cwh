/* Inheritance Syntax & Visibility Mode in C++ */
#include <iostream>
using namespace std;
// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee()
    {
    }
};

/*Derived Class syntax
class {{derived-class-name}}:{{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
}
Note:1.) Default Visibility Mode is Private.
     2.) Private Visiblity Mode: Public Members of the base Class becomes Private members of the
     derived class.
     3.) Public Visiblity Mode: Public Members of the base Class becomes Public members of the
     derived class.
     4.) Private Members are never Inherited. */

// Creating a Programmer class derived from Employee Base
class Programmer : public Employee
{
public:
    int languagecode;
    Programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void Getdata()
    {
        cout << id << '\n';
    }
};
int main()
{
    Employee siddhesh(1), harry(2);
    cout << siddhesh.salary << '\n';
    cout << harry.salary << '\n';
    Programmer skillf(10);
    cout << skillf.languagecode << '\n';
    cout << skillf.id << '\n';
    skillf.Getdata();
    return 0;
}