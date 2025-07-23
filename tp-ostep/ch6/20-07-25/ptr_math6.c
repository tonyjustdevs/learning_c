// 1.  print a char
// 2.  print a char array
// 3.  print a string array

#include<stdio.h>

int main(void){

    // char achar = 'F'; // 1.  print a char
    // printf("achar (c): [%c]\n", achar);

    // char string[] = "lionel_messi"; // 2a.  print a char array
    // printf("string (s): [%s]\n",string);
    
    // // char char_array[] = {'c','u','n','t'}; // needs terminator
    // char char_array[] = {'c','u','n','t','\0'}; //  
    // printf("char_array (s): %s\n\n",char_array);
    
    // char achar2 = 't'; // 1.  print a char
    // char *p_char = &achar2; // pointer to a single chr
    // printf("*p_char(c): [%c]\n",*p_char);
    
    // char string2[] = "andres iniesta"; // 2a.  print a char array
    // char *pstring2=string2; // === &string2[0] -> &'a' (char decays to &arr[0]) type char*
    // printf("pstring2 (a char*) (accepted by s): [%s]\n", pstring2);      // = address of 'a'

    // char char_array2[] = {'m','a','t','e','\0'}; //  
    // char *pchar_array2 = char_array2;
    // printf("pchar_array2 (a char*) (accepted by s): [%s]",pchar_array2);
    
    char *char_arr4[] = {"m", "a", "t", "e"};  // Array of 4 ptrs to (4) strings (each "m", "a", etc.)
    for (int i = 0; i < 4; i++) {
        printf("[%s] ", char_arr4[i]);  // Prints: [m] [a] [t] [e]
        // printf("[%s] ", &m);         // pointing to "m" array or "m\0"
        // printf("[%s] ", &m[0]);      // decays to &m[0] which is type char*
                                        // %s prints form "0" to \0"
    }   // then loop to &a -> &a[0] etc
    printf("\n");


    return 0;
}

