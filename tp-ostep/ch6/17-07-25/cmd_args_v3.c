#include<stdio.h>

int main(int argc, char* argv[]){
    printf("G'day");
    for (int i = 1; i < argc; i++)
    {
        printf(" %s",argv[i]);
    }
    
    printf("\n");
    return 0;
}
// argv size: 1...n
// calculate [byte size - 1]
// argv is array of strings 
// calc argv count
