/* LEARNING CALL BY VALUE & CALL BY REFERENCE */
#include<iostream>
using namespace std;
/* This will not swap a and b , (Call by value) */
// void swap(int a, int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

/* This will swap a and b , (Call by Reference using Pointer) */
// void swapPointer(int* a, int* b)
// {
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

/* This will too swap a and b , (Call by Reference using Reference Variable) */
// int &   ( /* Used for return by reference */ )
void swapreference (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    // return a; ( /* Used for return by reference */ )
}
int main()
{
    int a=4,b=6;
    cout<<"The value of a is: " <<a<<'\n';
    cout<<"The value of b is: "<<b<<'\n';
    // swap(a,b);  /* This will not swap a and b */
    // swapPointer(&a,&b); /* This will swap a and b */
    swapreference(a,b); //=786; /* This will too swap a and b */
    cout<<"The value of a after swapping is: " <<a<<'\n';
    cout<<"The value of b after swapping is: "<<b;'\n';
    return 0;

}