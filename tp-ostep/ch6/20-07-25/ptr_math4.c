#include<stdio.h>

int main (void){

    char char_arr[]="this is a sentence";
    char *p = char_arr; // char_arr -> char_arr[0] -> &['t'] ie some 0x...
    printf("p (s): [%s]\n",p);
    printf("p+1 (s): [%s]\n",p+1);
    // printf("*(p+1) (s): [%s]",*(p+1));

    // char str_arr[][50]={"first el", "2nd element", "last element"};
    // char *p2 = str_arr; // type mismatch: 'char(*)[n]' vs "char *"
    // initialization of ‘char *’ from incompatible pointer type ‘char (*)[50]
    // char (*p2)[50] = str_arr; // star_arr[0] -> &["first el"] 
    
    // char str_arr[][50] = {
    // "first el",
    // "2nd element",
    // "last element"
    // };
    // char (*p2)[50] = str_arr;  

    // printf("p (p): [%p]\n", p); // printf -> print %p -> prints addy
    // printf("p (s): [%s]\n\n", p); // print string

    // printf("p2 (p): [%p]\n",p2);
    // printf("p2 (s): [%s]\n",p2);        // %s expects a char *
    // printf("sizeof(p2) (zu): [%zu]\n",sizeof(p2));        // %s expects a char *
                                        // p2 is pointer to char *[50] - ptr to array of n chars


    return 0;
}