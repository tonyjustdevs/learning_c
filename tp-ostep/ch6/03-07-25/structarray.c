#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

    // create [struct]
    typedef struct{
        char name[50];
        int age;
        bool isEuro;
    }Player;
    // create 3 instances
    
    Player player1={"messi", 37, false};
    Player player2={"iniesta", 45, true};
    Player player3={"neymar", 35, false};
    // [forloop] - print each instances fields

    printf("%s %d %s\n",player1.name,player1.age,(player1.isEuro)?"European":"Not European");
    printf("%s %d %s\n",player2.name,player2.age,(player2.isEuro)?"European":"Not European");
    printf("%s %d %s\n",player3.name,player3.age,(player3.isEuro)?"European":"Not European");
    // create [struct_array]

    // add 3 instances to [struct_array]

    // [forloop] - print each instance
    return 0;
}