#include<stdio.h>

void swap(int *n1, int *n2);

int main(){
    int a=69;
    int b=420;

    printf("pre-swap [a:%d, b:%d]\n",a,b);
    swap(&a, &b);
    printf("pst-swap [a:%d, b:%d]\n",a,b);

    return 0;
}

void swap(int *n1, int *n2){
    int* tmp;

    tmp = *n1;  // *n1 = 69,    ie tmp=69
    *n1 = *n2;  // *n2 = 420,   ie n1* becomes 420
    *n2 = tmp;

}