#include <iostream>
using namespace std;

int main()
{

    cout << "===============================\n";
    cout << "==== Even or odd application ==\n";
    cout << "===============================\n\n\n";

    int numOne;

    cout << "Please enter the number to check \n";

    cin >> numOne;

    if (numOne >= 0)
    {
        if (numOne % 2 == 0)
        {
            cout << "The number in EVEN !!  " << numOne;
        }
        else
        {
            cout << "the number is ODD !!  " << numOne;
        }
    }
    else
    {
        cout << "WRONG ENTRY !!";
    }
    return 0;
}