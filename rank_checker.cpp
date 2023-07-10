#include <iostream>
using namespace std;

int main()
{

    cout << "======================" << endl;
    cout << "== Rank checker app ==" << endl;
    cout << "======================" << endl;

    int rank;

    cout << "Enter your rank : ";
    cin >> rank;

    if (rank > 0 && rank <= 500)
    {
        cout << "Your rank is not bad ( " << rank << " ) \n";
    }
    else if (rank > 500 && rank <= 1000)
    {
        cout << "Your rank is very good ( " << rank << " ) \n";
    }
    else if (rank > 1000)
    {
        cout << "Your rank is excellent ( " << rank << " ) \n";
    }
    else
        cout << "Wrong rank!!";

    return 0;
}