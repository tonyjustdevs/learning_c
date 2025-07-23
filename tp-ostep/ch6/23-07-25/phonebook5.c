#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    size_t BUF_SIZE = 100;
    
    FILE *pfile = fopen("tonys_phonebook.csv", "a");
    // FILE *pfile = fopen("", "a"); // caught in error 1

    if (!pfile)
    {
        perror("ERROR [1]: ");
        return 1;
    }
    
    char *pfullname=malloc(BUF_SIZE);
    char *pphone=malloc(BUF_SIZE);
    
    if (!pfullname || !pphone)
    {
        perror("ERROR [2]: ");
        return 1;
    }

    printf("Enter full name: "); // fgets(pfullname, BUF_SIZE, stdin);
    if (fgets(pfullname, BUF_SIZE, stdin)==NULL) goto cleanup;
    
    printf("Enter phone number: "); //fgets(pphone, BUF_SIZE, stdin);
    if (fgets(pphone, BUF_SIZE, stdin)==NULL) goto cleanup;
    
    pfullname[strcspn(pfullname,"\n")]='\0';
    pphone[strcspn(pphone,"\n")]='\0';

    fprintf(pfile,"%s, %s\n", pfullname, pphone); // printf("%s, %s\n", pfullname, pphone);

    cleanup:    
        free(pfullname);
        free(pphone);
        fclose(pfile);
        return 0;
}   