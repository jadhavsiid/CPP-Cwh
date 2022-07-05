/* More Example of Friend Function-2 */
#include<iostream>
using namespace std;
class c2; // Forward Declaration
class c1
{
    friend void exchange(c1& , c2&);
    public:
    int val1;

    int indata(int a)
    {
        val1 = a;
    }
    void Display(void)
    {
        cout<<val1<<'\n';
    }
    // friend void exchange(c1& , c2&);
};
class c2
{
    friend void exchange(c1& , c2&);
    public:
    int val2;

    int indata(int a)
    {
        val2 = a;
    }
    void Display(void)
    {
        cout<<val2<<'\n';
    }
    // friend void exchange(c1& , c2&);

};
void exchange(c1&x , c2&y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(55);
    oc2.indata(45);
    exchange(oc1,oc2);
    cout<<"The Value after Exchanging Becomes: ";
    oc1.Display();
    cout<<"The Value after Exchanging Becomes:";
    oc2.Display();
    return 0;
}