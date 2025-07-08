#include<stdio.h>
#include<string.h>

// create char
// create string literal with ""
// create array of strings with {}


int main(){

    // char a_char = 'a';
    // char b_char = 'b';
    // char d_char = 'random_things_but_only_last_letter_d';
    
    // printf("%c\n", a_char);
    // printf("%c\n", b_char);
    // printf("%c\n", d_char);
    
    // char aaaa_string[]  = "aaaa";
    // char bcde_string[]  = {'b','c','d','e'};
    char bcd_string[]       = {'b','c','d','\0','\0'};
    char bcde_string[]      = {'b','c','d', 'e','\0'};
    char bcde2_string[]     = {'b','c','d', 'e','\0','\0','\0','\0','\0','\0','\0'};
    char bde_string[]       = {'b','\0','d', 'e','\0','\0','\0','\0','\0','\0','\0'};
    char bcd50_string[50]   = {'b','c','d', 'e','\0','\0','\0','\0','\0','\0','\0'};
    char bd50_string[50]    = {'b','\0','d', 'e','\0','\0','\0','\0','\0','\0','\0'};
    
    printf("bcd_string [zu]: %zu   [%s]\n",    sizeof(bcd_string), bcd_string);
    printf("bcde_string [zu]: %zu  [%s]\n",   sizeof(bcde_string), bcde_string);
    printf("bcde2_string [zu]: %zu [%s]\n",  sizeof(bcde2_string), bcde2_string);
    printf("bde_string [zu]: %zu   [%s]\n",    sizeof(bde_string), bde_string);
    printf("bcd50_string [zu]: %zu [%s]\n",  sizeof(bcd50_string), bcd50_string);
    printf("bd50_string [zu]: %zu  [%s]\n",   sizeof(bd50_string), bd50_string);
    // printf("aaaa_string: %s\n", aaaa_string);
    // printf("%s\n", bcde_string);
    // printf("%s\n", bcde2_string);
    
    // fwrite(aaaa_string, aaaa_string[0], sizeof(aaaa_string), stdout);
    // fwrite(bcd_string, sizeof(bcd_string[0]), sizeof(bcd_string), stdout);

    return 0;
}