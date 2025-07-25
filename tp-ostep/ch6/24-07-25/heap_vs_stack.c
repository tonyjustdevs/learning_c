#include<stdio.h>

void bar(){
    int nb;     // created in same place as foo in stack
    printf("[bar()]nb addy: %p", nb);
    nb=1337;
}

void *foo(){     // foo is fn returning (int*: aka &n)
    int n;      // created in stack
    printf("[foo()]n addy: %p", n);
    n=42;       // n=42 in *foo() context (or local variable)
    // return &n;  // this context doesnt exist anymore 
} // becomes deallocated
                // when function ends
                // posssibly remains as garbage  

int main(){

    int *pn;    // ptr pn -> address of a 4-byte 'int'
    foo();
    // pn=foo();   // 
    // printf("%d\n", *pn); // print value at this returned address
    bar();
    // printf("%d\n", *pn);
    return 0;
}