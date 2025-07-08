#include<stdio.h>

int main(){

    char input_chars[100];

    FILE *pFile = fopen("input.txt","r");    // 1. create FILE ptr

    if (pFile==NULL)                // 2. pFile is NULL
    {
        perror("TP Error Occured:");
        return 1;
    }
    // FKENGETSIT
    printf("WINNING...file is being read... 🏆!!!\n");        // 3. pFile exists
    
    while (fgets(input_chars, sizeof(input_chars), pFile)!=0)
    {
        printf("%s", input_chars);
    }
    
    // int RV1 = fgets(input_chars, sizeof(input_chars), pFile);

    return 0;
}