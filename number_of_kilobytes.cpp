#include <iostream>
using namespace std;


int main()
{

int numberOfKilobytes;
int numberOfBytes;
int numberOfBits;

cout << "please enter the number of KiloBytes : ";
cin >> numberOfKilobytes;

numberOfBytes=numberOfKilobytes*1024;
numberOfBits=numberOfBytes*1024;

cout << "\n The number of Kilobytes is :" << numberOfKilobytes;
cout << "\n The number of Bytes is :" << numberOfBytes;
cout << "\n The number of Bits is :" << numberOfBits;

    return 0;
}