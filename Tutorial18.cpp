/* LEARNING RECURSIONS AND RECURSIVE FUNCTIONS */
#include<iostream>
using namespace std;
// int fib(int n)
// {
//     if (n<2)
//     {
//         return 1;
//     }
//     return fib(n-2) + fib(n-1);
    
// }
int fact(int n)
{
    if (n==1) /*Base Condition*/   
    {
        return 1;
    }
    return n*fact(n-1);
    
}
int main()
{
    int a;
    cout<<"Enter a number whose Factorial is required: ";
    // cout<<"Enter a number: ";
    cin>>a;
    cout<<"The Factorial of "<<a<<" is : "<<fact(a);
    // cout<<"The Term in Fibonacci series at position  " <<a<<" is : "<<fib(a);
    return 0;
}