
#include<stdio.h>

int main(){
    // create char

    char cool_char = 'a';
    char *pc = &cool_char; // create pointer to char
    
    int cool_int = 420;
    int *pc_int = &cool_int;

    // print pointer addy + n
    printf("chr_ptr+0: [%p]\n",pc);
    printf("chr_ptr+1: [%p]\n",pc+1);
    printf("chr_ptr+2: [%p]\n",pc+2);
    printf("chr_ptr+3: [%p]\n\n",pc+3);

    printf("p_int+0: [%p]\n",  pc_int);
    printf("p_int+1: [%p]\n",  pc_int+1);
    printf("p_int+2: [%p]\n",  pc_int+2);
    printf("p_int+3: [%p]\n\n",pc_int+3);

    return 0;
}