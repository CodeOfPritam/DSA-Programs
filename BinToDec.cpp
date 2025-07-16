#include<iostream>
using namespace std;

int binaryToDecimal(int bin)
{
    int rem=0,dec=0,pow=1;
    while(bin>0)
    {
        rem=bin%10;
        bin/=10;
        dec+=rem*pow;
        pow*=2;
    }
    return dec;
}

int main()
{
    int num;
    cout<<"Enter a number in binary form : ";
    cin>>num;
    cout<<"Number in decimal form : "<<binaryToDecimal(num)<<endl;
    return 0;
}