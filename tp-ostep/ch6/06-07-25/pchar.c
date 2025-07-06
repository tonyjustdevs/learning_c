#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *pSome_Chars = malloc(50);
    // pSome_Chars points to first bytes of string
    // *pSomeChars = pSomeChars[0]
    // &pSome_Chars is address of the pointer

    strcpy(pSome_Chars, "g'day mateys🥧");
    printf("1st char: [%c] (*pSome_Chars)  \n",*pSome_Chars); // print 1st character %c
    printf("1st char: [%c] (pSome_Chars[0])\n",pSome_Chars[0]);
    printf("string: [%s] (pSome_Chars)\n",pSome_Chars); // print whole string with loop
    printf("addy: [%p] (&pSome_Chars)\n",&pSome_Chars); // print addy
    printf("val@addy: [%s] (*&pSome_Chars)\n",*&pSome_Chars); // go addy and dereference with *
    
    
    printf("\n\n");
    printf("addy+1 p: [%p] (&pSome_Chars+1)\n",&pSome_Chars+1); // print addy
    printf("addy+1 p: [%p] (pSome_Chars+1)\n",pSome_Chars+1); // print addy
    // printf("val+1@addy: [%s] (*&pSome_Chars+1)\n",*(&pSome_Chars+1)); // go addy and dereference with *
    printf("add+1 s: [%s] (pSome_Chars+1)\n",pSome_Chars+1); // go addy and dereference with *
    return 0;
}