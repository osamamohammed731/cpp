#include <iostream>
using namespace std;


int main()
{

int intIn;
char charOut;

cout<<"===============================\n";
cout<<"==== Char to int application ==\n";
cout<<"===============================\n\n\n";


cout << "Please enter an integer number : ";
cin >> intIn;

charOut=char(intIn);

cout << "\n\nThe number " << intIn << " is for the char : "  << charOut << "\n\n";

    return 0;
}