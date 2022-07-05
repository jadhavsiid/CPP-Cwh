/* Friend Functions */
#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void SetNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend Complex sumComplex(Complex o1, Complex o2); // Declaring a Friend Function
    void PrintNumber()
    {
        cout << "The required Complex number is: " << a << "+" << b << "i" << '\n';
    }
};
Complex sumComplex(Complex o1, Complex o2) // Defining a Friend Function
{
    Complex o3;
    o3.SetNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.SetNumber(1, 4);
    c1.PrintNumber();

    c2.SetNumber(5, 8);
    c2.PrintNumber();

    sum = sumComplex(c1, c2);
    sum.PrintNumber();

    return 0;
}

/* Properties of Friend Functions
1.) Not Defined in the Scope of Class.
2.) Since it is not Defined in the scope of the class, it cannot be called from the object
of that class.
3.) Can be envoked without Help of any Object.
4.) Usually Contains Object as Arguments.
5.) Can be Declared inside Public or Private Section of the Class.
6.) It Cannot Access the members directly by thier names and need
object_name.member_name to access any member. */
