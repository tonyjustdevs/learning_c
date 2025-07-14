#include<stdio.h>

int main(){

    int nb; 
    int *p;
    // nb =   0b01100001000000000000000000000000;
    nb =   0b00000000000000000000000001100001;
    p =    &nb;

    printf("*p (d): [%d]\n",            *p);
    printf("*(char*)p (c): [%c]\n",    *(char*)p);     
    printf("p (p): [%p]\n",            p);

    return 0;
}