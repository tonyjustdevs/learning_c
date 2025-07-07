#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    // create string array

    // 1. array of chars
    char just_a_string[] = "mateball"; 



    char grades_array[] = {'A','C','B','A'}; 
    int scores_array[] = {69,420,666,123,0,100}; 
    bool bools_array[] = {true,true,false,false,true,false,false,true,false,false,}; 
    char strs_array[][20] = {"aaaaa","bbbb","cc","ddddd"}; 

    // 2. string
    for (int i = 0; i < sizeof(just_a_string)/sizeof(just_a_string[0]); i++)
    {
        printf("%c,",just_a_string[i]);
    }
    printf("\n");

    int grades_count = sizeof(grades_array)/sizeof(grades_array[0]);  // 4
    for (int i = 0; i < grades_count; i++)
    {
        printf("%c",grades_array[i]);
    }
    printf("\n");
    
    // 2. array of ints
    for (int i = 0; i < sizeof(scores_array)/sizeof(scores_array[0]); i++)
    {   // int scores_count = sizeof(scores_array)/sizeof(scores_array[0]);  
        printf("%d,",scores_array[i]);
    }
    printf("\n");
    
    // 3. array of bools
    for (int i = 0; i < sizeof(bools_array)/sizeof(bools_array[0]); i++)
    {
        printf("%d,",bools_array[i]);
    }
    printf("\n");

    // // 3. array of strs
    for (int i = 0; i < sizeof(strs_array)/sizeof(strs_array[0]); i++)
    {
        printf("%s,",strs_array[i]);
    }
    printf("\n");


    // for (int i = 0; i < 4; i++)
    // {
    //     printf("%c",grades_array[i]);
    // }

    // 4. array of strings
    // char output_array[] = {"g'day shazs🙋\n","ciao l8r then🐕\n","bye bye\n👋"}; 
    // printf("%s", output_array);
    // write to string array
    // printf("%c\n", output3);

    return 0;
}