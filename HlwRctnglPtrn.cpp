// Pattern of hollow rectangle
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // outer loop -> Rows
    for (int i = 0; i < 5; i = i + 1)
    {
        // Print 4 stars
        for (int j = 0; j < 5; j = j + 1)
        {
            if (i == 0 || i == 4)
            {
                cout << " * ";
            }
            else
            {
                if (j == 0 || j == 4)
                {
                    cout << " * ";
                }
                else
                {
                    cout << "   ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}