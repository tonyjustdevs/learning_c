#include<stdio.h>

int main(){

    // create pointer to FILE struct
    FILE *pFile = fopen("", "w"); // arg1: file_path arg2: r / w

    if (pFile == NULL)
    {
        printf("you failed"); // handle NULL + print(error)
        return 1;
    }
    
    fclose(pFile); // close file()

    return 0;
}