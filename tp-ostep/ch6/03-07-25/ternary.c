#include<stdio.h>
#include<stdbool.h>

int main(){
    bool isTRUE = false;
    int x=1;
    int y=3;
    int max = (x>y) ? x : y;
    printf("max(%d,%d) is %d\n",x,y,max);

    bool isOnline = false;
    // no format specifier for boolean.
    printf("isOnline status: %d, therefore you're %s",isOnline, (isOnline) ? "gaming": "working");
    return 0;
}