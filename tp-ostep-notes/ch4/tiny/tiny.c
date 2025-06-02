#include <stdio.h>

int global_var = 42;
int uninitialized_var;

void hello() {
    printf("Hello World\n");
}

int main() {
    hello();
    return 0;
}
// gcc -no-pie -o tiny tiny.c
