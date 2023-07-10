#include <iostream>
using namespace std;

int main()
{
    int price = 100;
    int discount = 10;
    int years;

    cout << "enter experience years : ";
    cin >> years;

    switch (years)
    {
    case 1:
        discount = 20;

        break;
    case 2:
        discount = 30;

        break;
    case 3:
        discount = 40;
        break;
    }
    cout << "the new price = " << price - discount << endl;

    return 0;
}
