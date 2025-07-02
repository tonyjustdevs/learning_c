#include<stdio.h>
#include<string.h>


int main(){
    // 1. accept a name & print name
    
    #define NO_OF_NAMES 3
    #define MAX_NAMES_LEN 50
    char names[NO_OF_NAMES][MAX_NAMES_LEN]={0};

    for (int i = 0; i < NO_OF_NAMES; i++)
    {   
        printf("enter a name %d:",i);
        fgets(names[i], sizeof(names[i]), stdin); //[t][o][n][y][\n]
        names[i][strlen(names[i])-1]='\0'; //tony
    }
    
    // printf("enter a name 1:");
    // fgets(names[0], sizeof(names[0]), stdin); //[t][o][n][y][\n]
    // names[0][strlen(names[0])-1]='\0'; //tony
    
    // printf("enter a name 2:");
    // fgets(names[1], sizeof(names[1]), stdin);
    // names[1][strlen(names[1])-1]='\0'; //ange
    
    // printf("enter a name 3:");
    // fgets(names[2], sizeof(names[2]), stdin);
    // names[2][strlen(names[2])-1]='\0'; //messi

    for (int i = 0; i < NO_OF_NAMES; i++)
    {
        printf("%s\n",names[i]);
    }
    
        // printf("%s\n",names[0]);
        // printf("%s\n",names[1]);
        // printf("%s\n",names[2]);
    
    // 2. accept multiple names & print all names - hardcore
    
    // 3. accept multiple names & print all names - for-loop

    return 0;
}