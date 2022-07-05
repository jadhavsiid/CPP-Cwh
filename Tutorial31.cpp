/* Constructor Overloading */
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y) // Parametrised Constructor
    {
        a = x;
        b = y;
    }
    Complex(int x) // Constructor Overloading
    {
        a = x;
        b = 0;
    }
    void PrintNumber()
    {
        cout << "The required Complex number is: " << a << "+" << b << "i" << '\n';
    }
};
int main()
{
    Complex C1(4,6);
    C1.PrintNumber();

    Complex C2(5);
    C2.PrintNumber();

    Complex C3;
    C3.PrintNumber();
    
    return 0;
}