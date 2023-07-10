#include <iostream>
using namespace std;

int main()
{

    int points = 0;
    int answers[3];
    int seq[3][5] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {1, 5, 9, 13}};

    cout << "Try to guess the missing numbers :- \n";
    cout << "Q1  :  2  |  4  | 6  |  ?? \n";
    cin >> answers[0];
    
    cout << "Q2  :  1  |  3  | 5  |  ?? \n";
    cin >> answers[1];

    cout << "Q3  :  1  |  5  | 9  |  ?? \n";
    cin >> answers[2];

    if(answers[0]==seq[0][3])
    {
        points++;
    }

    if(answers[1]==seq[1][3])
    {
        points++;
    }

    if(answers[2]==seq[2][3])
    {
        points++;
    }

    cout << "You scored " << points << " of 3 \n\n";
    cout << "The answers is  : \n";
    cout << "Q1  :  2  |  4  | 6  |  8 \n";
    cout << "Q2  :  1  |  3  | 5  |  7 \n";
    cout << "Q3  :  1  |  5  | 9  |  13 \n";

    return 0;
}