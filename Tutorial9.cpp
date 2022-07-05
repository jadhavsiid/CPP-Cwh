#include<iostream>
using namespace std;
int main()
{
    // Program on 'If' & 'If else' Control Statement
    int age;
    cout<<"Tell me your age :";
    cin>>age;
    // if ((age<18)&&(age>0))
    // {
    //     cout<<"You cannot come to Party"<<endl;
    // }
    // else if (age<1)
    // {
    //     cout<<"You are not even Born."<<endl;
    // }
    
    // else if (age==18)
    // {
    //     cout<<"You are just Stepping into Adulthood"<<endl;     
    // }
    // else{
    //     cout<<"You can come to Party"<<endl;
    // }
    
    //Program on 'Switch' Control Statement
    switch (age)
    {
    case 18:
        cout<<"You're 18!"<<endl;
        //break;
    case 22:
        cout<<"You're 22!"<<endl;
        //break;
    case 12:
        cout<<"You're 12!"<<endl;
        //break;
    
    default:
        cout<<"Get Lost!"<<endl;
        //break;
    }
    
    
    return 0;
}