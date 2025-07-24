#include<stdio.h>

int main(void){
    int c;     // variable 'c' of type char
    int *pc;   // pointer 'pc' of type char

    c   = 420;  // var 'c' has value 'a'
    pc  = &c;   // ptr *pc points to addy of 'c'

    printf("%p\n%p\n%p\n%p\n",
    pc,     // pc is a ptr, val is &c: e.g. x1000 
    pc+1,   // pc+4 or &c+4 (int are 4 bytes) : e.g. x1004
    pc+2,   // e.g. x1008
    pc+3    // e.g. x101c
    );

    return 0;

}