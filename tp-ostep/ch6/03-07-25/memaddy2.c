#include<stdio.h>

int main(){

    int age     = 69;
    int *pAge   = &age;
    int* p2Age  = &age;
    // int p3Age  = &age;
    
    printf("%d is at: %p\n",age,&age);
    printf("*pAge is at:  %p\n",pAge);
    printf("*p2Age is at: %p\n",p2Age);
    
    // address of variable
    // is same as value stored at pointerAge

    // in C, parameters are passed-by-value, ie a copy of  it
    // however we want to pass-by-reference, so we use pointers
    return 0;
}