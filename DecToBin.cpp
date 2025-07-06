#include <iostream>
using namespace std;

int decimalToBinary(int dec)
{
    int rem = 0, bin = 0, pow = 1;
    while (dec > 0)
    {
        rem = dec % 2;
        dec = dec / 2;
        bin += rem * pow;
        pow = pow * 10;
    }
    return bin;
}
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Binary form of " << i << " is : "<<decimalToBinary(i)<<endl;
    }
    return 0;
}