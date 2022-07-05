/* Constructors in C++ */
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Creating a Constructor:
    /* 1) Constructor is a special member function with same name as of the class.
    2.) It is used to Initialize objects of its class.
    3.) It is Automatically envoked or called whenever an object is created.*/

    Complex(void); // Declaring a Constructor
    void PrintNumber()
    {
        cout << "The required Complex number is: " << a << "+" << b << "i" << '\n';
    }
};
Complex::Complex(void) // Defining a Constructor //---> This is a default Constructor as it accepts no Parameters.
{
    a = 10;
    b = 0;
    // cout<<"Hello World"<<'\n';
}

int main()
{
    Complex c;
    c.PrintNumber();
    return 0;
}

/* Characteristics of Constructors */
/* 1.) It should be declared in the Public Section of the Class.
   2.) Constructor do not have Return type and cannot return the value.
   3.) It Can Have Default Arguments.
   4.) We cannot refer to thier Address. */