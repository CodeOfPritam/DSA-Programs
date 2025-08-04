#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0 || n==1)
        return n; 
    else    
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number of terms:"<<endl;
    cin>>n;
    if(n==1)
        cout<<1<<endl;
    else if(n==2)
        cout<<2<<endl;
    else
    { 
        cout<<0<<" ";
        cout<<1<<" ";       
        for(int i=2;i<=n;i++)
        {
            cout<<fib(i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}