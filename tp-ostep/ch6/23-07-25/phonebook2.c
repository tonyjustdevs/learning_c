#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    FILE *pfile = fopen("tonys_phonebook.csv","a"); // [OK] "a" overwrite 
    // FILE *file = fopen("tonys_phonebook.csv","a"); // [OK] "a" append
    // char *fname;                 // [1] BAD - incorrect sytnax: pointer without allocated mems
    // char fname[100];             // [2] OK - fixed 100 chars allocated
    const size_t BUF_SIZE = 100;    // [4] fixed config values
    
    char *pfname=malloc(BUF_SIZE);   // [3] OK - fixed 100 bytes allocated
    printf("Enter full name: ");
    fgets(pfname, BUF_SIZE, stdin);
    
    printf("Enter phone number: ");
    char *pphone=malloc(BUF_SIZE);   // [3] OK - fixed 100 bytes allocated
    fgets(pphone, BUF_SIZE, stdin);

    pfname[strcspn(pfname, "\n")] = '\0';    // [4] remove \name
    pphone[strcspn(pphone, "\n")] = '\0';

    fprintf(pfile, "%s,%s\n", pfname,pphone);     // write to phonebook.csv
    free(pfname);                    // free memory
    free(pphone);                    // free memory
    fclose(pfile);                   // close file

    return 0;
}