#include<stdio.h>
#include<stdlib.h>

int main(void){

    // FILE *file = fopen("tonys_phonebook.csv","w"); // [OK] "w" overwrite 
    FILE *file = fopen("tonys_phonebook.csv","a"); // [OK] "a" overwrite 
    // char *fname;                 // [1] BAD - incorrect sytnax: pointer without allocated mems
    // char fname[100];             // [2] OK - fixed 100 chars allocated
    size_t BUF_SIZE = 100;
    char *fname=malloc(BUF_SIZE);   // [3] OK - fixed 100 bytes allocated

    printf("Enter full name: ");
    fgets(fname, BUF_SIZE, stdin);

    fprintf(file, "%s", fname);     // write to phonebook.csv
    free(fname);                    // free memory
    fclose(file);                   // close file

    return 0;
}