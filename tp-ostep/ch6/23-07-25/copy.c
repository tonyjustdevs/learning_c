#include<stdio.h>

int main(void){

    // 1. open [og_file] to copy
    FILE *pfile = fopen("og_file.bin","r");
    // [pfile] points_to [1st_char] of [og_file.bin]

    // 2. read bytes into buffer?
    // 2a. print first character
    char file_content[100];
    // fprintf(file_content, "%c", pfile);

    // 3. fprint to [new_file]
    printf("file_content (s): %s",file_content);

    fclose(pfile);
    return 0;
}
