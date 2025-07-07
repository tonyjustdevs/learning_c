// https://users.cs.utah.edu/~zachary/isp/tutorials/separate/separate.html

#include <stdio.h>
#include "help.h"


int main () {
    int n;
    printf("Please enter a small positive integer: ");
    scanf("%d", &n);
    printf("The sum of the first n integers is %d\n", sum(n));
    printf("The product of the first n integers is %d\n", product(n));
    return 0;
}