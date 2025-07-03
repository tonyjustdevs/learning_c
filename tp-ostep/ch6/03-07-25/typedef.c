#include<stdio.h>

int main(){
    // array of characters ..is a string?

    char arrOfChars[]       = "tony cules";
    char arrOfChars2[50]    = "tony cules";

    printf("%s\n",arrOfChars);     
    printf("arrOfChars[]   : %zu\n",sizeof(arrOfChars));     
    
    printf("%s\n",arrOfChars2);     
    printf("arrOfChars2[50]: %zu\n",sizeof(arrOfChars2));     
    return 0;
}   