// Muliply the digit with its face value
// Add up al the face value
// Sum is the decimal number
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n)
{
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n /= 10;
    }
    return decimal;
}

int main()
{

    int n;
    cin >> n;
    int binary = binaryToDecimal(n);
    cout << binary << endl;
}