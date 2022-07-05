/* Friend Class & Member Friend Functions */
#include <iostream>
using namespace std;
/* Forward Declaration: Class Complex Agey milne vala hai */
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
    
};
class Complex
{
public:
    int a, b;
    // Individually Declaring Functions as Friends:
    // friend int Calculator::sumRealComplex(Complex, Complex); 
    // Declaring Entire Class as Friend:
    friend class calculator;
    void SetNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNumber()
    {
        cout << "The required Complex number is: " << a << "+" << b << "i" << '\n';
    }
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator:: sumCompComplex(Complex o1, Complex o2)
{
    return(o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.SetNumber(1, 4);
    o2.SetNumber(5, 7);
    Calculator Calc;
    int res = Calc.sumRealComplex(o1, o2);
    cout << "The Sum of Real Part of o1 and o2 is: " << res << '\n';
    int resc = Calc.sumCompComplex(o1, o2);
    cout<< "The Sum of Complex Part of o1 and o2 is: "<<resc<<'\n';
    return 0;
}