#include<stdio.h>

void swap(int *a, int *b);

int main(){
    
    int a=69;
    int b=420;

    printf("pre-swap [a,b]: [%d,%d]\n", a,b);
    swap(&a, &b);
    printf("pos-swap [a,b]: [%d,%d]\n", a,b);
    return 0;
}


void swap(int *a, int *b){
    
    int tmp_int;    // a=addy1 b=addy2 //  a*,b* --> int,int
    tmp_int = *a;   // tmp=1, a=1, b=2
    *a=*b;          // tmp=1, a=2, b=2
    *b=tmp_int;     // tmp=1, a=2, b=1
}


