/* Learning Structures */
#include<iostream>
using namespace std;
typedef struct employee
{
    int Id;
    char gender;
    float salary;
}ep;

/* Learning Unions */
// union money
// {
//     int rice;
//     char car;
//     float pounds;
// };

int main()
{
    struct employee siddhesh;
    siddhesh.Id = 1;
    siddhesh.gender = 'M';
    siddhesh.salary = 50000;
    cout<<"The Employee Id of Siddhesh is: "<<siddhesh.Id<<'\n';
    cout<<"The Salary of Siddhesh is: "<<siddhesh.salary<<'\n';
    cout<<"The Gender of Siddhesh is: "<<siddhesh.gender<<'\n';

    // union money m1;
    // m1.rice = 5;
    // m1.car = 's';
    // cout<<m1.rice<<'\n';
    // cout<<m1.car<<'\n';

    /* Learning Enum */
    // enum meal { breakfast, lunch, dinner};
    // meal m1 = breakfast;
    // cout<<(m1==0)<<'\n';
    // cout<<breakfast<<'\n';
    // cout<<lunch<<'\n';
    // cout<<dinner<<'\n';
    return 0;
}