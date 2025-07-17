#include<stdio.h>

int main(void){
    char name[50];
    
    printf("Enter your name: ");
    
    fgets(name, sizeof(name), stdin);

    printf("G'day %s", name);

    return 0;
}
