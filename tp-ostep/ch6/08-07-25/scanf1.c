#include<stdio.h>
#include<string.h>

int main(){

    printf("enter a number: ");
    int magic_no,magic_no2;
    int rv = scanf("%d %d",&magic_no,&magic_no2); // provide type & addy
    
    printf("magic_no1: %d (RV: %d, Expected RV: 2)\n", magic_no,    rv);
    printf("magic_no2: %d (RV: %d, Expected RV: 2)\n", magic_no2,   rv);
    return 0;

}
