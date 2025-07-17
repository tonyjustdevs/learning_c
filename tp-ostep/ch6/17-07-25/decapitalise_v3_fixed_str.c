#include<stdio.h>
#include<string.h>
// 97-121 a-z , 65-90: A-Z

#define ARR_SIZE 5

char decap(char input_char);

int main(){
    // 1. accept input
    
    // 2. loop through each 'char' of string
    // char sgl_char = 'T';         // 2a.  [v1_manual_char]
    // char some_chars;               // 2a.  [v2_user_input]

    
    // char some_chars[ARR_SIZE];             // 2a.  [v3a_string_manual]                       ---- ok
    // char some_chars[ARR_SIZE]="messi";             // 2a.  [v3b_string_manual]                  ---- ok
    char some_chars[ARR_SIZE]={'m','e','s','s','\0'}; // 2a.  [v3b_string_manual]                  ---- ok
    // char some_chars[ARR_SIZE];             // 2a.  [v3c_string_manual]
    // char some_chars[ARR_SIZE];             // 2a.  [v4_string_dynamic]
    // char some_chars[ARR_SIZE];             // 2a.  [v5_string_userinput]
    // printf("Please enter a capital letter: \n"); //2c. ask & accept input
    // scanf(" %c", &some_chars);


    // 2c. assign string values  [v3_string_manual]
    // some_chars[0]='m';
    // some_chars[1]='a';
    // some_chars[2]='t';
    // some_chars[3]='e';
    // some_chars[4]='s';
    // some_chars[0]='\0'
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("[pre] input_char [c,d]: [%c, %d] is a capital, make it smoller\n", some_chars[i],some_chars[i]);
        // do decap()
    };
    
    // printf("6th of some_chars[5][c]: [%c]\n",some_chars[5]); 
    // printf("6th of some_chars[5][d]: [%d]\n",some_chars[5]); 

    // printf("some_chars[s]: [%s]",some_chars);
    // if (some_chars>=65 && some_chars<=90) // 3. char -> int (65[A]-90[Z] )
    // {
    //     some_chars = decap(some_chars);   // 4. return capitalised char
    // }
    return 0;
}

char decap(char input_char){
    printf("[pre] input_char [c,d]: [%c, %d] is a capital, make it smoller\n", input_char,input_char);
    input_char+=32;
    printf("[pos] input_char [c,d]: [%c, %d]\n", input_char,input_char);
    return input_char;
};

