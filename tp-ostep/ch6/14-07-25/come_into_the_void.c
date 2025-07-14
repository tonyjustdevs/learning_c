#include<stdio.h>

printData(void *pdata_value, char selection);

int main(){

    int nb=42;
    int *p=&nb;

    printData(p,'i');

    return 0;
}

printData(void *pdata_value, char selection){
    if (selection=='c')
    {
        printf("Casting to char: [%c]",*(char*)pdata_value); // do c: char   
    }
    else if (selection=='f')
    {
        printf("Casting to float: [%c]",*(float*)pdata_value); // do f: float
        
    }
    else if (selection=='i')
    {
        printf("Casting to integer: [%c]",*(int*)pdata_value); // do i: int
    }
    else {
        perror("Incorrect selection!");
        return 1;
    }
}