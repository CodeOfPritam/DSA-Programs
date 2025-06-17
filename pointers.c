#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=34;
    int *ptr;
    ptr=&a;
    printf("Address of a is %u\n",ptr);
    // // printf("Value of a is %d\n",*ptr);
    // // printf("Address of a is %d\n",&a);
    // // printf("Value of a is %d\n",*&a);
    // int *arr=(int*)malloc(10*sizeof(int));
    // printf("Memory is created dynamically.");
    
    return 0;
}