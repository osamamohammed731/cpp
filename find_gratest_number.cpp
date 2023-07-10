#include <iostream>
using namespace std;

int main()
{

    cout << "===============================\n";
    cout << "=== Find the greatest number ==\n";
    cout << "===============================\n\n\n";

    int numOne, numTwo, numThree;

    cout << "Please enter three numbers : \n";
    cin >> numOne >> numTwo >> numThree;

    cout << "The greatest number is : ";
    cout << ((numOne > numTwo && numOne > numThree) ? numOne :((numTwo > numOne && numTwo > numThree) ? numTwo : ((numThree > numOne && numThree > numTwo) ? numThree : numThree)));

    cout << "\n\n############ With normal IF ############\n";

    if (numOne > numTwo && numOne > numThree)
    {
        cout << "The greatest number is : ";
        cout << numOne;
     }
     else if (numTwo > numOne && numTwo > numThree)
     {
         cout << "The greatest number is : ";
         cout << numTwo;
     }
     else if (numThree > numOne && numThree > numTwo)
     {
         cout << "The greatest number is : ";
         cout << numThree;
     }
     else
     {
         cout << "The three numbers is equal to : " << numOne;
     }

    return 0;
}