#include<iostream>
// #include"this.h" will give error file by such name is absent from ur directory 
using namespace std;
int main()
{
    int a=5,b=2;
    cout<<"This is Hello World Program"<<endl;
    // The Following are Arithmetic Operators in C++
    cout<<"The value of a+b is : "<<a+b<<endl;
    cout<<"The value of a-b is : "<<a-b<<endl;
    cout<<"The value of a*b is : "<<a*b<<endl;
    cout<<"The value of a/b is : "<<a/b<<endl;
    cout<<"The value of a%b is : "<<a%b<<endl;
    cout<<"The value of a++ is : "<<a++<<endl;//6
    cout<<"The value of ++a is : "<<++a<<endl;//7
    cout<<"The value of a-- is : "<<a--<<endl;//6
    cout<<"The value of --a is : "<<--a<<endl;//5
    cout<<endl;

    /*The Following are Assignment Operators in C++
    used to assign values to variables.
    int a=25,b=20;
    char s='d';*/

    // The Following are Comparison Operators in C++
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a<=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

   // Thw Following are Logical Operators in C++
   cout<<"The value of LO ((a==b) && (a>b)) is : "<<((a==b) && (a>b))<<endl;
   cout<<"The value of LO ((a==b) || (a>b)) is : "<<((a==b) || (a>b))<<endl;
   cout<<"The value of LO (!(a==b)) is : "<<(!(a==b))<<endl;

    
    return 0;
}

   

    