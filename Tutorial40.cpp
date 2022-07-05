/* MULTILEVEL INHERITANCE */
#include <iostream>
using namespace std;
class Student // Base Class
{
protected:
    int Roll_no;

public:
    void Set_rollno(int);
    void Get_rollno(void);
};
void Student::Set_rollno(int r)
{
    Roll_no = r;
}
void Student::Get_rollno()
{
    cout << '\n';
    cout << "The Roll no of Student is: " << Roll_no << '\n';
}
class Exam : public Student // 1st Derived Class
{
protected:
    float Maths;
    float Physics;

public:
    void Setmarks(float, float);
    void Getmarks();
};
void Exam::Setmarks(float M1, float P1) 
{
    Maths = M1;
    Physics = P1;
}
void Exam::Getmarks()
{
    cout << "The Marks Obtained in Maths are: " << Maths << '\n';
    cout << "The Marks Obtained in Physics are: " << Physics << '\n';
}
class Result : public Exam // 2nd Derived Class
{
    float Percentage;

public:
    void display()
    {
        Get_rollno();
        Getmarks();
        cout << "Your Percentage is: " << (Maths + Physics) / 2 << " %" << '\n';
    }
};
int main()
{
    Result harry;
    harry.Set_rollno(9);
    harry.Setmarks(94.0, 89.2);
    harry.display();
    return 0;
}
/* Notes: If We are Inheriting B from A and C from B: [A--->B---->C]
  Then,   1. A is the Base Class for B and B is the Base Class for C.
          2. [A--->B---->C] is Called Inheritance Path. */