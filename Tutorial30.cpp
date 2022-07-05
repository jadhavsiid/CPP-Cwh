/* Learning Parametrised Constructor */
#include<iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int , int); // Declaring a Constructor
    void PrintNumber()
    {
        cout << "The required Complex number is: " << a << "+" << b << "i" << '\n';
    }
};
Complex::Complex(int x, int y) // Defining a Constructor //---> This is a Parametrised Constructor as it accepts two Parameters.
{
    a = x;
    b = y;
}
int main()
{
    // Implicit call
    Complex a(4,6);
    a.PrintNumber();   

    // Explicit Call
    Complex b = Complex(5,7);
    b.PrintNumber();
    return 0;
}