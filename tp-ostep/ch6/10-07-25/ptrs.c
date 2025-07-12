#include<stdio.h>

int main(){

    int n;
    int *pn;
    int **ppn;
    int ***pppn;
    int ****ppppn;
    int *****pppppn;

    n       = 69;
    pn      = &n;     // pn is a var: [int-ptr], &n is [int-ptr]
    ppn     = &pn;    // ppn is var: ptr->[int-ptr], &pn is ptr->[int-ptr]
    pppn    = &ppn;   // pppn is ptr->ppn
    ppppn   = &pppn;    

    printf("****ppppn: %d", ****ppppn);

    return 0;
}