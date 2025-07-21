#include<stdio.h>
#include<stdlib.h>

int main(){

    int *x=malloc(3*sizeof(int));

    x[0]=69;
    x[1]=420;
    x[2]=666;

    return 0;
}