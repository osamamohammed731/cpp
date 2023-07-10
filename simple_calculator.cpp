#include <iostream>
using namespace std;

int main()
{

    cout << "=======================" << endl;
    cout << "== Simple calculator ==" << endl;
    cout << "=======================" << endl;

    int numOne, numTwo, op;

    cout << "please enter the first number : ";
    cin >> numOne;

    cout << "please enter the seconed number : ";
    cin >> numTwo;

    cout << "please choose the Operator : " << endl;
    cout << "[1] >> + " << endl;
    cout << "[2] >> - " << endl;
    cout << "[3] >> * " << endl;
    cout << "[4] >> / " << endl;
    cin >> op;

    if (op >= 1 && op <= 4)
    {
        cout << numOne << ((op == 1) ? " + " : (op == 2) ? " - "
                                           : (op == 3)   ? " * "
                                           : (op == 4)   ? " / "
                                                         : "Wrong operator!!")
             << numTwo << " = ";
        if (op == 1)
        {
            cout << numOne + numTwo << endl;
        }
        else if (op == 2)
        {
            cout << numOne - numTwo << endl;
        }
        else if (op == 3)
        {
            cout << numOne * numTwo << endl;
        }
        else if (op == 4)
        {
            cout << numOne / numTwo << endl;
        }
    }
    else
    {
        cout << "Not supported operator \n";
    }

    return 0;
}
