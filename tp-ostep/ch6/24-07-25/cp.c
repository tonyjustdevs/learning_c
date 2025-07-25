#include<stdio.h>

int main(){
    // create a pointer for file
    // FILE *pfile1 = fopen("og_file.bin", "w");
    FILE *pfile1 = fopen("og_file.bin", "r");

    // allocate memory?
    char content[]="First line.\n2nd part.\nFinal sentence.\n";
    
    
    
    
    fprintf(pfile1,"%s", content);
    fclose(pfile1);

    return 0;
}