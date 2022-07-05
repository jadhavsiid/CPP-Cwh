/* Learning Objects Memory Allocation Using Arrays in OOPS */
#include <iostream>
using namespace std;
class shop
{
    int Iteamid[100];
    int Iteamprice[100];
    int Counter;

public:
    void initCounter(void) { Counter = 0; }
    void SetPrice(void);
    void DisplayPrice(void);
};
void shop ::SetPrice(void)
{
    cout << "Enter ID of your Iteam no: " << Counter + 1 << '\n';
    cin >> Iteamid[Counter];
    cout << "Enter Price of your Iteam" << '\n';
    cin >> Iteamprice[Counter];
    Counter++;
}
void shop ::DisplayPrice(void)
{
    for (int i = 0; i < Counter; i++)
    {
        cout << '\n'
             << "The Price of Iteam with ID " << Iteamid[i] << " is: Rs." << Iteamprice[i];
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    dukaan.SetPrice();
    dukaan.SetPrice();
    dukaan.DisplayPrice();
    return 0;
}