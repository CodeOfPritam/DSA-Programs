#include <iostream>
using namespace std;

// void change(int *ptr) //pass by reference using pointers
// {
//     *ptr = 20;
// }

// void change(int &b) //pass by reference using aliases(references)
// {
//     b=20;
// }

int main()
{
    // int a=10;
    // int *ptr=&a;
    // int **ptr2=&ptr;
    // cout<<ptr<<endl;
    // cout<<*ptr<<endl;
    // cout<<ptr2<<endl;
    // int *n=NULL;
    // cout<<n<<endl;

    // int p=50;
    // change(p);
    // cout<<"Inside main function "<<p<<endl;

    int arr[]={1,2,3,4,5};
    cout<<*arr<<endl;
    cout<<arr<<endl;

    int a=10;
    int b=5;
    int *ptr=&a;
    ptr=&b;
    cout<<ptr<<endl;
    cout<<++ptr<<endl;

    cout<<*(arr+1)<<endl;

    int *ptr2;
    int *ptr1=ptr2+2;

    cout<<ptr1-ptr2<<endl;
    cout<<(ptr1>ptr2)<<endl;

    int *ptr3=arr;
    cout<<*(ptr3+1)<<endl;
    cout<<*(ptr3+3)<<endl;
    ptr++;
    cout<<*(ptr3)<<endl;
    return 0;
}