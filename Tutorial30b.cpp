/* Example of Parametrised Function */
#include<iostream>
using namespace std;
class point
{
    int x,y;
public:
    // int x,y;
    point(int a, int b) // Parametrised Constructor
    {
        x = a;
        y = b;
    }
    void Displaypoint()
    {
        cout<<"The Point is ("<<x<<","<<y<<")"<<'\n';
    }

};
int main()
{
    point p(1,1);
    p.Displaypoint();
    point q(4,6);
    q.Displaypoint();
    return 0;
}

/* QUIZ: Create a Function which takes 2 Point objects and Computes the distance between them */
/* Hint: 1.) Create a function (make it a friend function) which takes 2 point objects and computes the
        distance between them.
        2.) Use this Points to check your Code:
          (i) Distance between (1,1) and (1,1) is 0
          (i) Distance between (0,1) and (0,6) is 5
          (i) Distance between (1,0) and (70,0) is 67
*/