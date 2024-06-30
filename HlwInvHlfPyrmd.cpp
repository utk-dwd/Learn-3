// How to print hollow inverted half pyramid

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the dimension of pyramid" << endl;
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row == 0 || col == 0 || col == n - row - 1)
            {
                cout << " * ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}