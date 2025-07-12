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

    printf("Enter 3 grades (with spaces): ");
    // printf("Enter 3 grades: ");
    // scanf(" %c", grades); // accept one grade 0 OK
    scanf(" %c %c %c", grades+0, grades+1, grades+2); // accept one grade
    printf("1st grade entered: [%c]\n",*(grades+0));
    printf("2nd grade entered: [%c]\n",*(grades+1));
    printf("3rd grade entered: [%c]\n",*(grades+2));
    free(grades); // return rented memory to os

    return 0;
}

