#include<stdio.h>

int main(){
    // 1. create 2d-arr of chars (requires padding)
    
    char sports[][10]={
        {'f','o','o','t','b','a','l','l','\0','\0'},
        {'t','e','n','n','i','s','\0','\0','\0','\0'},
        {'g','o','l','f','\0','\0','\0','\0','\0','\0'}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c",sports[i][j]);
        }
        printf("\n");
    }   

    return 0;
}