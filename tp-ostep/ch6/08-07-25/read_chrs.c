#include<stdio.h>

int main(){

    // 1. create buffer
    char input_buffer[1024]="\0"; //1kb

    // const *input_file_txt = "input.txt";
    // FILE *pFile = fopen("input.txt","r");
    FILE *pFile = fopen("input_chrs.txt","r"); // 2. create ptr to FILE struct

    if (pFile==NULL) // 3. handle NULL ptr
    {
        perror("failure! ❌❌❌:");
        return 1;
    }
    char asdf = fprintf(pFile,"%c","input_chrs.txt");
    
    printf("%c",asdf);
    
    fclose(pFile); // 4. close file
    printf("success!🏆");
    return 0;
}