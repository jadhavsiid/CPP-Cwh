/* LEARNING NESTING OF MEMBER FUNCTIONS */
#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;
    void Chk_bin(void);

public:
    void read(void);
    // void Chk_bin(void);
    void Ones(void);
    void Display(void);
};
void binary ::read(void) // Defining Member Function of a Class
{
    cout << "Enter a Binary Number" << '\n';
    cin >> s;
}
void binary ::Chk_bin(void) // Defining Member Function of a Class
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << '\n'
                 << "INCORRECT BINARY FORMAT!" << '\n';
            exit(0);
        }
    }
}
void binary ::Ones(void)   // Defining Member Function of a Class
{
    Chk_bin(); // Nesting of Member function Check Binary before checking for one's Compliment
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::Display(void)  // Defining Member Function of a Class
{
    cout << '\n'
         << "Displaying your binary number: " << '\n';
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.read();
    // b.Chk_bin(); //No need to declare this member function here using dot operator as Nesting is done.
    b.Display();
    b.Ones();
    b.Display();

    return 0;
}