#include<iostream>
using namespace std;
int x=10;

int main()
{
    int a=4,b=8;
    // cout<<"Bitwise AND: "<<(a&b)<<endl;
    // cout<<"Bitwise OR: "<<(a|b)<<endl;
    // cout<<"Bitwise XOR: "<<(a^b)<<endl;
    // cout<<"Bitwise Left Shift: "<<(10<<2)<<endl;
    // cout<<"Bitwise Right Shift: "<<(8>>2)<<endl;
    // cout<<5-2*6<<endl;
    // if(3>1)
    // {
    //     int x=10;
    // }
    // cout<<x<<endl;
    // for(int i=0;i<5;i++)
    // {
    //     int x=5;
    // }
    // cout<<i<<endl;
    // cout<<x<<endl;
    // These modifiers are signed and integers by default 
    unsigned int cID=-10;
    cout<<sizeof(int)<<endl; // 4 bytes
    cout<<sizeof(long int)<<endl; // 4 bytes
    cout<<sizeof(long long int)<<endl; // 8 bytes
    cout<<sizeof(short int)<<endl; // 2 bytes
    cout<<cID<<endl;
    return 0;
}