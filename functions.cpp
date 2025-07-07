#include<iostream>
using namespace std;

int printhello()
{
    cout<<"Hello!"<<endl;
     return 5;
}

int sum(int a, int b)
{
    return a+b;
}

int sumN(int num)
{
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        sum+=i;
    }
    return sum;
}

int minNum(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    // cout<<sum(10,5)<<endl;
    // cout<<sum(50,5)<<endl;

    // cout<<sumN(10)<<endl;
    // cout<<sumN(15)<<endl;

    cout<<"Minimum of 3 and 5 is "<<minNum(3,5)<<endl;
    return 0;
}