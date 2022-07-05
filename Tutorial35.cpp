/* Destructors in C++ */
#include <iostream>
using namespace std;
/* Destructor never takes an argument nor does it return any value.*/
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when Constructor is Called for object number: " << count << '\n';
        cout << '\n';
    }
    ~num() // Destructor implication
    {
        cout << "This is the time when my destructor is called for object number: " << count << '\n';
        cout << '\n';
        count--;
    }
};
int main()
{
    cout << "We are Inside our main function" << '\n';
    cout << '\n';
    cout << "Creating first Object n1" << '\n';
    cout << '\n';
    num n1;
    {
        cout << "Entering this Block" << '\n';
        cout << '\n';
        cout << "Creating two more Objects" << '\n';
        cout << '\n';
        num n2, n3;
        cout << "Entering this Block" << '\n';
        cout << '\n';
    }
    cout << "Back to main" << '\n';
    cout << '\n';

    return 0;
}