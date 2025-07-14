#include<stdio.h>

int main(){
    // int n=42;
    // int *pn=&n;

    int n;
    int *pn;
    int **ppn;
    int ***pppn;
    
    n       = 42;
    pn      = &n;       // pn   -> pts to -> n_addy
    ppn     = &pn;      // ppn  -> pts to -> pn_addy
    pppn    = &ppn;     // pppn -> pts to -> ppn_addy
    
    // deference pppn 
    printf("pn (p) adddy: %p\n",pn);
    printf("pn (d) value: %d\n\n",*pn);
    
    // ppn addy == *pppn (pppn derefeenced once)
    printf("ppn addy (p): [by der-1-time *pppn value]: %p\n",*pppn);
    printf("ppn addy (p): [by ppn]: %p\n",ppn);

    return 0;
}