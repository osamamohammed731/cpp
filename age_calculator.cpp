#include <iostream>
using namespace std;

int main () {

const int yearMonths=12;
const int monthDays=30;
const int dayHours=24;
const int hourMinuts=60;
const int minuteSeconds=60;

// github update commit
cout << "==============================\n";
cout << "==============================\n";
cout << "===== Age calculator app =====\n";
cout << "==============================\n";
cout << "==============================\n";

int age;

cout << "My age is : " ;
cin  >> age ;

int ageInMonths=age*yearMonths;
int ageInDays=ageInMonths*monthDays;
int ageInHours=ageInDays*dayHours;
int ageInMinutes=ageInHours*hourMinuts;
int ageInSeconds=ageInMinutes*minuteSeconds;

cout << "My age in years = " << age ; 
cout << "\nMy age in months = " << ageInMonths ; 
cout << "\nMy age in days = " << ageInDays ; 
cout << "\nMy age in hours = " << ageInHours ; 
cout << "\nMy age in minutes = " << ageInMinutes ; 
cout << "\nMy age in seconds = " << ageInSeconds ; 



    return 9;
}