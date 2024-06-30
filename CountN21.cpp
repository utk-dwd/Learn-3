// Print counting from N to 1

#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int i = a;
    for (i = a; i >= 0; i = i - 1)
    {
        if (i >= 1)
        {
            cout << i << endl;
        }
        else
        {
            cout << "Done";
        }
    }

    return 0;
}