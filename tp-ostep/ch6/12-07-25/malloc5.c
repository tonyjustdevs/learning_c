#include<stdio.h>
#include<stdlib.h>


int main(){
    int number=0;     // 1. get number of grades (user input) - integer
    
    printf("Please enter number of Grades: ");
    scanf(" %d",&number);
    printf("You chose: [%d]\n",number);
    printf("Bytes allocated: [%zu]\n",number * sizeof(char));

    char *grades = malloc(number * sizeof(char)); //rent memory

    for (int i = 0; i < number; i++)
    {
        printf("Enter grade [%d of %d]: ",i+1,number);
        // scanf(" %c", grades+i); 
        scanf(" %c", &grades[i]); 
    }

    for (int i = 0; i < number; i++)
    {
        // printf("grade %d: [%c]\n", i+1, *(grades+i));
        printf("%c ", grades[i]);b
    }   
    
    free(grades); // return rented memory to os


    return 0;
}
