/* Learning Static Data Members and Member Functions */
#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count; // Stastic Variable

public:
    void Setdata(void)
    {
        cout << '\n'
             << "Enter the id: ";
        cin >> id;
        count++;
    }
    void Getdata(void)
    {
        cout << "The ID of Employee is : " << id << '\n'
             << "and this is Employee number " << count << '\n';
    }
    static void getcount(void)
    {
        cout << "The value of Count is: " << count << '\n';
    }
};
// count is Static Data member of Class Employee
int Employee::count; // Default value will be 0

int main()
{
    Employee Siddhesh, John, Bill;
    /*Siddhesh.id = 1;
    Siddhesh.count = 1; cannot do this as id and count are private */
    Siddhesh.Setdata();
    Siddhesh.Getdata();
    // Employee::getcount();// Static member function accesed without creating object

    John.Setdata();
    John.Getdata();
    // Employee::getcount();// Static member function accesed without creating object

    Bill.Setdata();
    Bill.Getdata();
    // Employee::getcount();// Static member function accesed without creating object

    return 0;
}