/* SINGLE INHERITANCE */
#include <iostream>
using namespace std;
class base
{
    int data1; // will be Private by default and non-inheritable
public:
    int data2;
    void Setdata();
    int getData1();
    int getData2();
};
void base::Setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getData1()
{
    return data1;
}
int base::getData2()
{
    return data2;
}
class derived : private base // Class is bieng derived Privately
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    Setdata(); // can be called only in process when class is being derived privately
    data3 = data2 * getData1();
}
void derived::display()
{
    cout << "Value of Data 1 is: " << getData1() << '\n';
    cout << "Value of Data 2 is: " << data2 << '\n';
    cout << "Value of Data 3 is: " << data3 << '\n';
}

int main()
{
    derived der;
    // der.Setdata(); when derived privetely setdata cannot be called in driver function
    der.process();
    der.display();

    return 0;
}