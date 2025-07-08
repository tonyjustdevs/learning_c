#include<stdio.h>

int main(){

    char input_chars[100];

    FILE *pFile = fopen("","r");    // 1. create FILE ptr

    if (pFile==NULL)                // 2. pFile is NULL
    {
        perror("TP Error Occured:");
        return 1;
    }
    // FKENGETSIT
    printf("WINNING...file is being read... 🏆!!!");        // 3. pFile exists
    
    int RV1 = fgets(input_chars, sizeof(input_chars), pFile);
    printf("Reading input til first terminator character:\n");

    printf("%s", input_chars);

    return 0;
}