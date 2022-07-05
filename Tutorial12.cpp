/* Learning Pointers */
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b= &a; //(* is called Dereference Operator)

    /* To Find out Adress of a Data type using Pointer*/
    cout<<"The address of a is : "<<&a<<'\n';
    cout<<"The address of a is : "<<b<<'\n';

    /* To Find out Value of a Data type which is Stored */
    cout<<"The value at a is : "<<a<<'\n';
    cout<<"The value at a is : "<<*b<<'\n';

    /* Pointer to Pointer */
    int **c=&b;
    cout<<"The address of pointer b is : "<<&b<<'\n';
    cout<<"The address of pointer b is : "<<c<<'\n';
    cout<<"The adress of another pointer stored in pointer b is: "<<*c<<'\n';
    cout<<"The value stored at the adress of pointer b is  : "<<**c<<'\n';
    
    return 0;
}