#include "help.h"

/* Requires that "n" be positive.  Returns the sum of the
   first "n" integers. */

int sum (int n) {
    int i;
    int total = 0;
    for (i = 1; i <= n; i++){
        total += i;
    }
    return(total);
}


/* Requires that "n" be positive.  Returns the product of the
   first "n" integers. */

int product (int n) {
    int i;
    int total = 1;
    for (i = 1; i <= n; i++){
        total *= i;
    }
    return(total);
}