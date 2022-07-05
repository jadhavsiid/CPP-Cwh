/* AMBIGUITY RESOLUTION INHERITANCE IN C++ */
#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << " How are You?" << '\n';
    }
};
class base2
{
public:
    void greet()
    {
        cout << " Kaise Ho?" << '\n';
    }
};
class derived : public base1, public base2 // Derivation through Multiple Inhertiance
{
    int a;

public:
    void greet()
    {
        base1::greet(); // Cleared the abiguity after defining the base class
    }
};

class b
{
public:
    void say()
    {
        cout << "Hello World" << '\n';
    }
};
class d : public b
{
    int a;

public:
    void say()
    {
        b::say(); // We Clearing the Ambiguity
        cout<<"Hello Beautiful People"<<'\n'; // Compiler Itself Clearing it by overwriting it
    }
}; 
int main()
{
    /* AMBIGUITY-1 */

    base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived obj;
    // obj.greet(); /* Here Ambiguity for a compiler gets created as it is confused about using greet()
                    /* function of base1 or of base2 as base class isn't defined. */
    obj.greet();

    /* AMBIGUITY-2 */
    b B;
    B.say();
    d D;
    D.say();
    return 0;
}