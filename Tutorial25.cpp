/* Array of Objects */
#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setID(void)
    {
        cout << "Enter ID of Employee: ";
        cin >> id;
    }
    void getID(void)
    {
        cout << "The ID of Employee is: " << id << '\n';
    }
};

int main()
{
    // Employee Siddhesh, Harshada, Devendra, Bhakti;
    // Siddhesh.setID();
    // Siddhesh.getID();

    /* Creating Array of Objects */
    Employee Coke[4];
    {
        for (int i = 0; i < 4; i++)
        {
            cout << '\n';
            Coke[i].setID();
            Coke[i].getID();
        }
    }

    return 0;
}