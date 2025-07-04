#include<stdio.h>

int main(){
    // create FILE pointer -> file_path

    FILE *pFile = fopen("tp_output.txt","r");

    if (pFile==NULL)
    {
        printf("failed!!!! 🙅‍♂️🙅‍♂️🙅‍♂️");
        return 1;
    }
    
    char input_buffer[1024]={0};

    while (fgets(input_buffer, sizeof(input_buffer), pFile)!=NULL)
    {
        printf("%s",input_buffer);
    }
    
    printf("winning!!!! 🤜🤜🤜");
    fclose(pFile);
    return 0;
}