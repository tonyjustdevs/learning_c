#include<stdio.h>
#include<math.h>

int main(){
    printf("Welcome to sqrt program\n");
    int y=9;
    int x;
    x=sqrt(y);
    printf("sqrt(%d) is: %d\n",y,x);
    return 0;
}
// preprocess: gcc -E main.c > main.i   [main.c]
// assemble: gcc -S main.c              [main.s]
// compile: gcc -c main.c               [main.o]
// link: gcc main.o                     [main] executable


