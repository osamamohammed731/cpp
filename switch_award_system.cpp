#include <iostream>
using namespace std;

int main()
{

    int num;
    cout << "Please enter your number :";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "IPhone\n";
        break;
    case 2:
        cout << "TV\n";
        break;
    case 3:
        cout << "Tablet\n";
        break;
    default:
        cout << "No award!!\n";
        break;
    }

    return 0;
}
