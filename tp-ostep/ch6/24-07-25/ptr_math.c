#include<stdio.h>

int main(void){
    char c;     // variable 'c' of type char
    char *pc;   // pointer 'pc' of type char

    c   = 'a';  // var 'c' has value 'a'
    pc  = &c;   // ptr *pc points to addy of 'c'

    printf("%p\n%p\n%p\n%p\n",
    pc,     // pc is a ptr, val is &c: e.g. x1000 
    pc+1,   // pc+1 or &c+1, next inc in mem: e.g. x1001
    pc+2,   // e.g. x1002
    pc+3    // e.g. x1003
    );

    return 0;

}