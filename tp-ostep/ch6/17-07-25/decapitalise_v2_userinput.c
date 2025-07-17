#include<stdio.h>
#include<string.h>
// 97-121 a-z , 65-90: A-Z
char decap(char input_char);
int main(){
    // 1. accept input
    
    // 2. loop through each 'char' of string
    // char sgl_char = 'T';         // 2a.  [v1_manual_char]
    char sgl_char;                  // 2b.  [v2_user_input]

    //2c. ask & accept input
    printf("Please enter a capital letter: \n");
    scanf(" %c", &sgl_char);

    if (sgl_char>=65 && sgl_char<=90) // 3. char -> int (65[A]-90[Z] )
    {
        sgl_char = decap(sgl_char);   // 4. return capitalised char
    }
    return 0;
}

char decap(char input_char){
    printf("[pre] input_char [c,d]: [%c, %d] is a capital, make it smoller\n", input_char,input_char);
    input_char+=32;
    printf("[pos] input_char [c,d]: [%c, %d]\n", input_char,input_char);
    return input_char;
};

