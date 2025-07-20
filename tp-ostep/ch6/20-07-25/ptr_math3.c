#include<stdio.h>

int main (void){

    // add char arr 
    char char_arr[]="this is a sentence";
    // char char_arr[]="this is a sentence";
    // char *p = &char_arr; 
    // char *p2 = char_arr; // array decays to {ptr->char_arr[0]} during dec: type matches
    char *p3;   
    char **pp4; 

    p3 = &char_arr;
    pp4 = &p3;
    printf("*p3: expected: 't' [%c]\n",*p3);
    printf("*p3+1: expected: 'h' [%c]\n\n",*(p3+1));


    printf("**pp4: expected: 't' [%c]\n",**pp4);
    printf("**(pp4+3): expected: 's' [%c]\n",**(pp4+3));
        // - p is [ptr -> char]                   type: char *p 
        // - &char_arr is [ptr -> char_array] or  type: char (*p)[n]
        // -- char *p type_mismatch (!=) char (*p)[n]
    // printf("expected @ compilation: TYPE MISMATCH [char (*p)[n] Vs char *]\n");
    // printf("*p (s)[expected: ???]: [%s]\n", *p); // seg fault
    // printf("char_arr (s)[expected: this is a sentence]: [%s]\n", char_arr);
    // printf("*p (c)[expected: t]: [%c]\n", *p);  // t ok
    // printf("*p2 (p)[expected: 0x...]: [%p]\n", *p2); // p2->arr[0]
    // printf("*p2 (c)[expected: ...sentence...]: [%s]\n", p2); // t


    
    // dereference

    return 0;
}