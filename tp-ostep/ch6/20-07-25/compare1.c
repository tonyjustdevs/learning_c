#include<stdio.h>

int main(void){
    char input1[50];
    char input2[50];
    // char *fgets(char *s, int size, FILE *stream);
    printf("enter input 1: ");
    fgets(input1, sizeof(input1), stdin);
    // input1[sizeof(input1)-1]='\0';
    
    fgets(input2, sizeof(input2), stdin);

    if (input1==input2)
    {
        printf("ok");
    } else{
        printf("not     ok");
    }

    
    // printf("input1: [%s]\n",input1);

    return 0;
}
// compare them