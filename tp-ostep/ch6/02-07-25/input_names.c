#include<stdio.h>
#include<string.h>


int main(){
    // 1. accept a name & print name
    
    char names[][50]={"0"};

    printf("enter a name:");
    fgets(names[0], sizeof(names), stdin); //[t][o][n][y][\n]
    // int names_0_len = strlen(names[0]); // 5 (includes [\n])
    // names[0][names_0_len-1]="\0";
    int names_0_len = strlen(names[0]); // 4 (inc [\n])
    printf("pre-name_0: %s\n",names[0]);    // tony\n
    printf("pre-len__0: %d\n\n",names_0_len); // 5

    names[0][4]='\0';
    
    int names_0_len1 = strlen(names[0]); // 4 (exclude [\n])
    printf("post-name_0: %s\n",names[0]);    // tony
    printf("post-len__0: %d\n",names_0_len1); // 4
    
    // 2. accept multiple names & print all names - hardcore
    
    // 3. accept multiple names & print all names - for-loop

    return 0;
}