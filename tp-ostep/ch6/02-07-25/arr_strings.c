#include<stdio.h>

int main(){

    // 1. create arr of strings
    
    // char fruits[][10]={"banana","apples","coconut"};
    char players[][10]={"messi","ronaldo","hazard"};

    // printf("%s\n",fruits[0]);
    // printf("%s\n",fruits[1]);
    // printf("%s\n",fruits[2]);
    
    for (char i = 0; i < 3; i++)
    {
        printf("%s\n",players[i]);
    }
    printf("\n");
    
}