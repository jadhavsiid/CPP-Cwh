/* Protected Acess Modifier in C++ */
#include <iostream>
using namespace std;
class Base
{
protected: /* Ek asa variable jyala aplyala private thevaycha ahe pan inherite pan karaycha
            ahe, ashya variable la protect banavl jaata */
    int a;

private:
    int b;
};
/*
For a Protected member:
                        Public Derivation    Private Derivation     Protected Derivation
                        
1.Private members       Not Inherited        Not Inherited          Not Inherited
2.Protected members     Remains Protected    Remains Private        Remains Protected
3.Public members        Remains Public       Remains Private        Remains Protected
*/

class derived : protected Base
{
};
int main()
{
    Base b;
    derived d;
    // cout << b.a; //will not work since 'a' is Protected in Base as well as derived Class.

    return 0;
}