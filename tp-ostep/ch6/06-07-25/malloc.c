#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int no_of_chrs = 4;
    char some_chars[3][50] = {"messi", "iniesta", "xavi"};
    
    int chr_size = sizeof(some_chars[0]);
    
    printf("chr_size: %d\n",chr_size);
    printf("total_chr_bytes: %d\n", no_of_chrs*chr_size);
    
    
    char *pChar = malloc(no_of_chrs*chr_size);
    printf("[pre-strcpy()]whats &pChar addy? %p\n", &pChar);
    printf("[pre-strcpy()]whats  pChar addy? %p\n", pChar);
    printf("[pre-strcpy()]whats  pChar val ? %s\n", pChar);

strcpy(pChar, "mate 123");
    printf("[post-strcpy()]whats at &pChar addy? %p\n", &pChar);
    printf("[post-strcpy()]whats at  pChar addy?  %p\n", pChar);
    printf("[post-strcpy()]whats is  pChar val ? %s\n", pChar);

    free(pChar);
    pChar=NULL;

    return 0;
}