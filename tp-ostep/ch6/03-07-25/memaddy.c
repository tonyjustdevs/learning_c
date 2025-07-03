#include<stdio.h>

int main(){

    int age = 69;
    // printf("memory address of age: \n%p\n",&age);

    
    // create pointer that points to something
    // - keep data type same int
    // - * is the deference operator

    int age2 = 420;
    int *pAge2 = &age2;
    int* p2Age2 = &age2;


    // show address is same as pointer????

    printf("%d    addy: ---> %p\n",age2,&age2);
    printf("pAge2  ptr: ---> %p\n", pAge2);
    printf("p2Age2 ptr: ---> %p\n", p2Age2);
    return 0;
}