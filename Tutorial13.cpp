/* Learning Arrays */
#include<iostream>
using namespace std;
int main()
{
    
    int marks[]={23,45,70,99};
    // int Mathmarks[4];
    // Mathmarks[0]=256;
    // Mathmarks[1]=250;
    // Mathmarks[2]=563;
    // Mathmarks[3]=857;

    // cout<<"These are Mathmarks"<<'\n';
    // cout<<Mathmarks[0]<<'\n';
    // cout<<Mathmarks[1]<<'\n';
    // cout<<Mathmarks[2]<<'\n';
    // cout<<Mathmarks[3]<<'\n';
    
    // Changing marks in an Array 
    // marks[2]=89;
    // cout<<"These are marks"<<'\n';
    // cout<<marks[0]<<'\n';
    // cout<<marks[1]<<'\n';
    // marks[2]=89;
    // cout<<marks[2]<<'\n';
    // cout<<marks[3]<<'\n';

    // Declaring Array using FOR Loop
    // for (int i = 0; i<4; i++)
    // {
        // cout<<"The value of marks "<<i<<" is: "<<marks[i]<<'\n';
    // }

    /* Pointers & Arrays */
    int *p = marks;
    cout<<*(p++)<<'\n';
    cout<<*(++p)<<'\n';
    // cout<<"The value of marks [0] is: "<<*p<<'\n';
    // cout<<"The value of marks [1] is: "<<*(p+1)<<'\n';
    // cout<<"The value of marks [2] is: "<<*(p+2)<<'\n';
    // cout<<"The value of marks [3] is: "<<*(p+3)<<'\n';


    
    return 0;
}