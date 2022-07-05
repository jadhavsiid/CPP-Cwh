/* MULTIPLE INHERITANCE */
#include <iostream>
using namespace std;

/* SYNTAX FOR MULTIPLE INHERITANCE
class DerivedC: visibility-mode base1, visibility-mode base2;
{
    class body of class "DerivedC"

};*/
class base1 // Base Class 1
{
protected:
    int Base1int;

public:
    void Get_Base1int(int a)
    {
        Base1int = a;
    }
};
class base2 // Base Class 2
{
protected:
    int Base2int;

public:
    void Get_Base2int(int b)
    {
        Base2int = b;
    }
};
class derived : public base1, public base2 // Deriving single class from Base Class 1 & 2 using Multiple Inheritance
{
public:
    void show()
    {
        cout << "The Value of Base 1 is: " << Base1int << '\n';
        cout << "The Value of Base 2 is: " << Base2int << '\n';
        cout << "The sum of Values of Base 1 and Base 2 is: " << Base2int + Base1int << '\n';
    }
};
/* The Inherited Derived Class will look something like this:
Data Members:
            Base1int ---> Protected
            Base2int ---> Protected
Member Functions:
            Get_Base1int() ---> public
            Get_Base2int() ---> public
            show() ---> public  
*/
int main()
{
    derived Siddhesh;
    Siddhesh.Get_Base1int(55);
    Siddhesh.Get_Base2int(91);
    Siddhesh.show();
    return 0;
}