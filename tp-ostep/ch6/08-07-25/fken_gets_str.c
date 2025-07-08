#include<stdio.h>

int main(){

    char cool_full_name[100]="";
    
    char cool_full_name2[100]="";
    char* pCool=cool_full_name2;
    
    printf("enter a cool full name:");
    
    char* RV = fgets(cool_full_name, sizeof(cool_full_name),stdin);
    
    printf("enter a cool full name2:");
    char* RV2 = fgets(pCool, sizeof(cool_full_name2),stdin);
    
    
    printf("cool name1: %s [RV %p]",  cool_full_name,   RV); 
    printf("cool name2: %s [RV2 %p]", cool_full_name2, RV2); 

    return 0;
}