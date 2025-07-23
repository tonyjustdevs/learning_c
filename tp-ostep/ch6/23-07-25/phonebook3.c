#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    // int BUF_SIZE=100;
    const size_t BUF_SIZE=100;

    char *p_fname=malloc(BUF_SIZE); // or str
    char *p_phone=malloc(BUF_SIZE); // or str

    // FILE *p_file = fopen("tmp.csv", "w");
    FILE *p_file = fopen("tmp.csv", "a");

    printf("Enter Full Name: ");
    fgets(p_fname,BUF_SIZE,stdin);
    int IDX_NEW_LINE = strcspn(p_fname, "\n");  // find new line char idx
    p_fname[IDX_NEW_LINE]='\0';                 // replace with null

    printf("Enter Phone Number: ");
    fgets(p_phone,BUF_SIZE,stdin);
    IDX_NEW_LINE = strcspn(p_phone, "\n");  // find '\n' char idx
    p_phone[strcspn(p_phone, "\n")]='\0';                 // replace with '\0'

    
    printf("%s, %s\n", p_fname, p_phone);
    fprintf(p_file,"%s, %s\n", p_fname, p_phone);
    
    free(p_phone);
    free(p_fname);
    fclose(p_file);
    return 0;
}