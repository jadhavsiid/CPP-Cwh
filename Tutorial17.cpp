/* LEARNING INLINE FUNCTIONS, DEFAULT AND CONSTANT ARGUMENTS */
#include<iostream>
using namespace std;
// inline int prod (int a, int b)
// {
//     int c= a*b;
//     return c;
// }
float MoneyRecieved(int CurrentMoney, float Factor = 1.04)
{
    return CurrentMoney*Factor;
}
// int strlen(const char *p)
// {

// }
int main()
{
    // cout<<"The Product of a and b is: "<<prod(5,2);
    int Currentmoney;
    cout<<"Enter your Salary: ";
    cin>>Currentmoney;
    cout<<"If you have "<<Currentmoney<<" Rs in your Bank Account, you will recive Rs "<<MoneyRecieved(Currentmoney)<<" After one year.";
    return 0;
}