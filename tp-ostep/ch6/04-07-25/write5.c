#include<stdio.h>

int main(){

    char output_char[100]="g'day mates🙋\nciao all👋\n"; // create char

    // FILE *pFile = fopen("","w");             // this fails successfully
    FILE *pFile = fopen("tp_output.txt","w");   // create empty txt

    if (pFile==NULL)
    {   // handle NULL
        printf("FAILED!!! 👎👎👎");
        return 1;
    }
    
    fprintf(pFile,"%s",output_char); // write file fprintf
    printf("WINNING!!! 🏆🏆🏆🏆"); // print succcess

    fclose(pFile); // fclose

    return 0;
}