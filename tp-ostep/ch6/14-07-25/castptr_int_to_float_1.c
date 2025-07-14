#include<stdio.h>

int main(){

    int nb; 
    int *p;
    nb =    42;
    // nb =    0b10000000; // [1000][000] = 2*8 = 256
    p =    &nb;

    printf("*p (d): [%d]\n",            *p);            // 42
    printf("*(float*)p (E): [%E]\n",    *(float*)p);    // [5.885454E-44]
    printf("*(float*)p (.6f): [%.50f]\n",*(float*)p);   // [0.00000000000000000000000000000000000000000005885454]

    // int nb = 42;
    // float nbs = 69.690;
    // printf("int sizeof(nbs): [%zu]",sizeof(nbs));
    // printf("float sizeof(nb): [%zu]",sizeof(nb));
    return 0;
}

// int *p: [0x0010-1010][0x00][0x00][0x00] -> "int binary configuration"  : addy of [int] ->
// p                                        : addy of [pointer to int]

// *(float*)p                               : tell compiler pointer [p] holds address of a float
// float (4 bytes) [0x..][0x..][0x..][0x..] -> "float binary configuration"