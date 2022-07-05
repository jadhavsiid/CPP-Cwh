#include<iostream>
using namespace std;
int c= 45;
int main()
{
    // int a,b,c;
    // cout<<"Enter value of a :";
    // cin>>a;
    // cout<<"Enter value of b : ";
    // cin>>b;
    // c=a+b;
    // cout<<"The sum is: "<<c<<endl;
    // cout<<"The Global variable through scope resolution operator is: "<<::c;

    // float d=34.4f;
    // long double e=34.4l;
    // cout<<"The size of 34.4 is:  "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is:  "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is:  "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is:  "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is:  "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is :"<<d<<endl<<"The value of e is :"<<e;
    
    /* CONCEPT OF REFERENCE VARIABLE*/
    // float x = 32.3;
    // cout<<x<<endl;
    // float &y = x;
    // cout<<y<<endl;

    /* TYPECASTING*/
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);
    cout<<"The Expression is "<<a+b<<endl;
    cout<<"The Expression is "<<a+(int)b<<endl;
    cout<<"The Expression is "<<a+int(b)<<endl;
    

    return 0;
}
