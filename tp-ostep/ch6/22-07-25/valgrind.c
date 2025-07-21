#include<stdio.h>
#include<stdlib.h>

int main(void){

    int *x = malloc(3*sizeof(int));
    x[0]=42;
    x[1]=69;
    x[2]=420;
    
    free(x);
    return 0;
    }
    
// possible output if bugs

// $ valgrind ./valg
//          ==22537== Memcheck, a memory error detector
//          ==22537== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
//          ==22537== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
//          ==22537== Command: ./valg
//          ==22537==
//          ==22537==
//          ==22537== HEAP SUMMARY:
//          ==22537==     in use at exit: 12 bytes in 1 blocks
//          ==22537==   total heap usage: 1 allocs, 0 frees, 12 bytes allocated
//          ==22537==
//          ==22537== LEAK SUMMARY:
//          ==22537==    definitely lost: 12 bytes in 1 blocks
//          ==22537==    indirectly lost: 0 bytes in 0 blocks
//          ==22537==      possibly lost: 0 bytes in 0 blocks
//          ==22537==    still reachable: 0 bytes in 0 blocks
//          ==22537==         suppressed: 0 bytes in 0 blocks
//          ==22537== Rerun with --leak-check=full to see details of leaked memory
//          ==22537==
//          ==22537== For lists of detected and suppressed errors, rerun with: -s
//          ==22537== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
