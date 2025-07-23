#include<stdio.h>

int main(void){
    char full_name[50];
    printf("enter fullname: ");
    fgets(full_name, sizeof(full_name), stdin);    

    printf("full_name(s): [%s]",full_name);
    return 0;
}