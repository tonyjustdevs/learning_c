#include<stdio.h>

int main(){

    char cool_full_name[100]="";
    printf("enter a cool full name:");
    int RV = fgets(cool_full_name, sizeof(cool_full_name),stdin);
    printf("cool name: %s [RV %d]", cool_full_name, RV); 

    return 0;
}