/* LEARNING CLASSES IN OOPS */
#include <iostream>
using namespace std;
class Employee
{
    private:
        int a,b,c; // Only Internal Functions can be accessed.
    public:
        int d,e;
    void Setdata(int a1,int b1,int c1); // Declaration 
    void Getdata()
    {
        cout<<"The Value of a is : "<<a<<'\n';
        cout<<"The Value of b is : "<<b<<'\n';
        cout<<"The Value of c is : "<<c<<'\n';
        cout<<"The Value of d is : "<<d<<'\n';
        cout<<"The Value of e is : "<<e<<'\n';
    }

};
void Employee :: Setdata(int a1, int b1, int c1)  // Define
{
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee Siddhesh;    // Object
    // siddhesh.a = 100; // This will throw error as a is private
    // Siddhesh.d = 24;
    // Siddhesh.e = 56;
    Siddhesh.Setdata(1,2,4);
    Siddhesh.Getdata();
    return 0;
}


