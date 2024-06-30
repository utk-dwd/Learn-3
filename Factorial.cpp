// How to print the factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number to find factorial" << endl;
    cin >> n;

    int b = 1;
    for (n; n >= 1; n = n - 1)
    {
        b = b * n;
    }
    cout << "The Factoral is : " << b;

    return 0;
}