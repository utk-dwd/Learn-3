// pattern of rectangle
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // outer loop -> Rows
    for (int i = 0; i < 3; i = i + 1)
    {
        // Print 4 stars
        for (int j = 0; j < 5; j = j + 1)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}