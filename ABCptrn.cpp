// Pattern printing with ABC charecters using mapping
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 0; row < n; row = row + 1)
    {
        char ch;
        for (int col = 0; col < row + 1; col = col + 1)
        {
            int num = col + 1;
            ch = num + 'A' - 1;
            cout << ch;
        }

        // jbtk A nhi print hota tbtk chlna chiye
        for (char alphabet = ch; alphabet > 'A';)
        {
            alphabet = alphabet - 1;
            cout << alphabet;
        }
        cout << endl;
    }
    return 0;
}
// floyd triangle
// Butterfly pattern
// half diamond