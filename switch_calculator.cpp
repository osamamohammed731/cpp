#include <iostream>
using namespace std;

int main()
{
    int n1, n2, op;

    cout << "enter n1\n";
    cin >> n1;
    cout << "enter n2\n";
    cin >> n2;
    cout << "choose the operator : \n";
    cout << "[1] >> + \n";
    cout << "[2] >> - \n";
    cout << "[3] >> * \n";
    cout << "[4] >> / \n";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
        break;
    case 2:
        cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
        break;
    case 3:
        cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
        break;
    case 4:
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        break;
    default:
        cout << "Wrong choice!!";
        break;
    }
    return 0;
}