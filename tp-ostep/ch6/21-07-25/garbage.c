#include<stdio.h>
#include<stdlib.h>
int main(void){

    int *x;
    int *y;

    x=malloc(sizeof(int));
    *x=42;
    
    printf("[1] x (d): [%d]\n",*x);
    
    y=x;
    printf("[2] x (d): [%d]\n",*x);
    printf("[2] y (d): [%d]\n",*y);
    
    *y=13;
    printf("[3] x (d): [%d]\n",*x);
    printf("[3] y (d): [%d]\n",*y);




    return 0;
}