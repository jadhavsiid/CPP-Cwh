/* LEARNING FUNCTION OVERLOADING IN C++ */
#include<iostream>
using namespace std;
float volume (int r, int h)
{
    return (3.14*r*r*h);
}
float volume (int a)
{
    return (a*a*a);
}
float area (int b, int h)
{
    return (0.5*b*h);
}
float area (int l, int b , int h)
{
    return (l*b*h);
}
int main()
{
    
    cout<<"The Volume of Cylinder is: "<<volume(3,4)<<'\n';
    cout<<'\n';
    cout<<"The Volume of Cube is: "<<volume(5)<<'\n';
    cout<<'\n';
    cout<<"The Area of Triangle is: "<<area(5,4)<<'\n';
    cout<<'\n';
    cout<<"The Area of Rectangle is: "<<area(5,10,25);
    cout<<'\n';
    return (0);
}