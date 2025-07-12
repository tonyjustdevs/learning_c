#include<stdio.h>



int main(){

    
    // 1. get number of grades (user input) - integer
    int user_chosen_no_of_grades;
    
    printf("Please enter number of Grades: ");
    scanf(" %d",&user_chosen_no_of_grades);
    printf("You chose: [%d]\n",user_chosen_no_of_grades);
    
    // 2. declare grades - array
    char grades[user_chosen_no_of_grades]; // e.g. grades[3] is [char_array] created.
    
    // 3. accept user_input grades - chars
    for (int i = 0; i < user_chosen_no_of_grades; i++)
    {
        printf("Enter Grade %d: ", i+1);
        scanf(" %c",&grades[i]);
    }
    
    printf("print first grade: %c", grades[0]);
    
    
    // 2.  calculate required bytes (of memory)
    // 2.1  get size of each grade (char)


    // 2.2  calc bytes: multiple l [no_of_grades] * [bytes_per_grade] each grade (char)

    //int grades[nbr_of_grades]=; // ?? malloc??
    // each char    
    
    // 3. allocate memory
    
    
    // 5. print user input
    
    // 6. free memory?
    
    
    return 0;
}


