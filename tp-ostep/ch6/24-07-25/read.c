#include<stdio.h>

int main(){
    FILE *pfile1 = fopen("og_file.bin", "r");
    
    char input_content[1024];

    fprintf(input_content, "%c",pfile1); // pfile1 -> input_content

    printf("First chr: [%c] (expected: 'F')", input_content);
    fclose(pfile1);

    return 0;
}