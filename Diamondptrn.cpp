// Diamond Pattern

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int n = num / 2;
    // Full Pyramid
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j = j + 1)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < i + 1; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Inv Full pyramid
    for (int i = 0; i < n; i = i + 1)
    {
        for (int j = 0; j < i; j = j + 1)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j = j + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
