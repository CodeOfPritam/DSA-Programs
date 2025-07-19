#include <iostream>
using namespace std;

// int factorial(int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return n*factorial(n-1);
// }


int printSum(int n,int sum)
{
    if(n==0)
        return sum;
    else
    {
        sum+=n;
        printSum(n-1,sum);
    }
}

int main()
{
    int n;
    cout << "Enter a number:" << endl;
    cin >> n;
    cout<<"Sum is "<<printSum(n,0)<<endl;
    return 0;
}