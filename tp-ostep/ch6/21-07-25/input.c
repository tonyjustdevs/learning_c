#include<stdio.h>

int main(){
    char name[]= "lionel messi";

    char grades[]={'c','u','n','t','\0'};

    char *players[]={"lionel messi","andres iniesta", "tony cules"};
    char pieces[]={"king","queen", "rook"};


    printf("%s\n",name);
    printf("%s\n\n",grades);
    

    return 0;
}