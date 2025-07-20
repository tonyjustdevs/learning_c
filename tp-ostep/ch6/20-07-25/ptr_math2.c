#include<stdio.h>

int main(){
    
    // add str
    char cool_str[] = "g'day everyone";
    char c = *cool_str;          // ✅ same as arr[0]    

    printf("c = *cool_str (c): [%c]",c);
    // add ptr to [first_char] of [str]
    // char *p1 = &cool_str[0]; // addy of 1st_char -> p1 -> 'g'
    // char *p2 = cool_str;

    // printf("p1 (p)[expected: 0x...]: %p\n",p1);       // dref *p1 -> 'g'
    // printf("*p1 (c)[expected: g]: %c\n\n",*p1);       // dref *p1 -> 'g'
    // printf("cool_str (s)[expected: g'day everyone]: %s\n",cool_str);       
    return 0;
}