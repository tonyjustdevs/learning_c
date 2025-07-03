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


    Player players[]={player1,player2,player3};

    // bytes players
    int players_size = sizeof(players)/sizeof(players[0]);

    // bytes single players
    printf("Number of players: %d:\n", players_size);
    for (int i = 0; i < players_size; i++)
    {
        printf("- %s %d %s\n",players[i].name,players[i].age,(players[i].isEuro)?"European":"Not European");
    }
    
    // create [struct_array]

    // add 3 instances to [struct_array]

    // [forloop] - print each instance
    return 0;
}