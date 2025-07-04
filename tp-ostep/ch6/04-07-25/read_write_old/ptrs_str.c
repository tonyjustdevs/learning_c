#include<stdio.h>
#include<string.h>

void update_value_str(char *pAge_str);

int main(){

    char age_str[50]="69";
    char *pAge_str= age_str;

    printf("[pre] %s @ %p (&age_str)\n",  age_str, &age_str);
    printf("[pre] %s @ %p (*pAge)\n\n",   age_str, pAge_str);

    update_value_str(age_str);

    return 0;
}

void update_value_str(char *pAge_str){
    strcpy(pAge_str, "420");
    // (*pAge)=420;
}

