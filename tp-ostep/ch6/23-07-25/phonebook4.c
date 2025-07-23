#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    size_t BUF_SIZE = 100;

    char *pfullname=malloc(BUF_SIZE);
    char *pphone=malloc(BUF_SIZE);
    
    if (!pfullname || !pphone)
    {
        perror("ERROR CAUGHT[1]: ");
        return 1;
    }

    FILE *pfile = fopen("tonys_phonebook.csv", "a");

    if (!pfile)
    {
        perror("ERROR CAUGHT[2]: ");
        return 1;
    }
    
    printf("Enter full name: "); // fgets(pfullname, BUF_SIZE, stdin);
    if (fgets(pfullname, BUF_SIZE, stdin)==NULL) goto cleanup;
    
    printf("Enter phone number: "); //fgets(pphone, BUF_SIZE, stdin);
    if (fgets(pphone, BUF_SIZE, stdin)==NULL) goto cleanup;
    
    pfullname[strcspn(pfullname,"\n")]='\0';
    pphone[strcspn(pphone,"\n")]='\0';

    printf("%s, %s\n", pfullname, pphone);
    fprintf(pfile,"%s, %s\n", pfullname, pphone);

    if (!pfile)
    {
        perror("ERROR CAUGHT[1]: ");
        return 1;
    }

    cleanup:    
        free(pfullname);
        free(pphone);
        fclose(pfile);
    return 0;
}