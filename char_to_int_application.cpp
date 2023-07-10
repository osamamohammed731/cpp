#include <iostream>
using namespace std;

int main()
{

char charIn;
int intOut;

cout << "=================================\n";
cout << "== Char to Integer application ==\n";
cout << "=================================\n";


cout << "\nPlease enter a single character :";
cin >> charIn;

intOut=int(charIn);

cout << "\n\nThe Integer value for " << charIn << " is : " << intOut <<"\n";

    return 0;
}