/* More Example of Friend Function-1 */
#include <iostream>
using namespace std;
class y; // Forward Declaration
class x
{
    int data;

public:
    void Setvalue(int value)
    {
        data = value;
    }
    friend void add (x,y); // Friend Functions
};
class y
{
    int num;

public:
    void Setvalue(int value)
    {
        num = value;
    }
    friend void add (x,y); // Friend Functions
};
void add(x o1, y o2)
{
    cout << "Summing Data's of x and y Objects gives me: " << o1.data + o2.num << '\n';
}
int main()
{
    x a1;
    a1.Setvalue(3);
    y b1;
    b1.Setvalue(5);
    add(a1,b1);

    return 0;
}