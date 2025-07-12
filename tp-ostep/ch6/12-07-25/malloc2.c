#include<stdio.h>

#include<stdlib.h>


int main(){
    int number=0;     // 1. get number of grades (user input) - integer
    
    printf("Please enter number of Grades: ");
    scanf(" %d",&number);
    printf("You chose: [%d]\n",number);

    char *grades = malloc(number * sizeof(char)); //rent memory
    // *grades is a pointer to heap memory address

    // p*
    // [][][][]-[][][][]
    
    // add grades ??
    // - because pointer is char  *
    // - pointer arithmetic allows us to increment accordingly
    // - whilst assigning values???
    
    // for (int i = 0; i < number; i++)
    // {
    //     // grades is ptr, value is mem_addy, (also numerical)
    //     // *grades is 1st value (a mem_addy: x00) of chunk of heap memory
    //     // 1. accept user input: integer 
    //     // 2. assign to *grades
    //     // 3. increement to next grades? ie grades+1??
    //     scanf(" %c", grades);       // accepts memory address (NOT VALUE @ MEM_ADDY)?
    //                                 // addy == pointer , can accept pointer?
    // }

    printf("Enter one grade: ");
    scanf(" %c", grades); // accept one grade
    printf("Grade entered: [%c]\n",*grades);
    free(grades); // return rented memory to os

    return 0;
}

