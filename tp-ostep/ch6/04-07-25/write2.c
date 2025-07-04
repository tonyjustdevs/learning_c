#include<stdio.h>

int main(){
    
    char tonys_output[50] = "hello\nthis is tony's\nfirst output file!\n";


    // create pointer to FILE struct
    FILE *pFile = fopen("tonys_c_output.txt", "w"); // arg1: file_path arg2: r / w

    if (pFile == NULL)
    {
        printf("you failed"); // handle NULL + print(error)
        return 1;
    }

    fprintf(pFile,"%s",tonys_output);

    fclose(pFile); // close file()

    return 0;
}