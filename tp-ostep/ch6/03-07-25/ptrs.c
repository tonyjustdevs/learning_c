#include<stdio.h>
void change_name(char *pName);

int main(){
    char name[]="messi";
    char *pName=&name;
    
    printf("pre-run %s",name);
    change_name(pName); // run function() in main()
    printf("post-run %s",name);
    
    return 0;
}

// create function (int *variable)...
void change_name(char *pName){
    (*pName)="iniesta";
}