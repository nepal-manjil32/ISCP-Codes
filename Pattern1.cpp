#include <iostream>
using namespace std;

int main()
{
    int row, col, n;
    cout << "Enter n: ";
    cin >> n;

    for (row = 1; row <= (2*n-1); row++)
    {        
        if (row < n)
        {
            for (col = 1; col <= row; col++)
            {
            cout << "* ";
            }
            cout << endl;
        }
        
        else if ((row >= n) && (row <= (2*n-1)))
        {
            for (col = n; col >= (row - n + 1); col--)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}

