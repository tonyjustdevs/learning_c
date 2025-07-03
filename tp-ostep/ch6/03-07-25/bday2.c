#include<stdio.h>

// void increment_age(int your_age);
// void increment_age2(int* pYour_age);
void increment_age3(int* pYour_age);

int main(){
    int your_age = 69;
    int *pYour_age = &your_age;
    
    printf("[main()] %d\n",your_age); 
    
    // increment_age(your_age);
    // increment_age2(pYour_age);
    increment_age3(pYour_age);

    printf("[main()] %d\n",your_age); 
    return 0;
}

void increment_age3(int* pYour_age){
    printf("[increment_age3()] ptr_addy pre-inc %p\n", (*pYour_age));
    // pYour_age++; // only increments memory addy
    (*pYour_age)++; // increments value at memory addy
    printf("[increment_age3()] ptr_addy post-inc %p\n", (*pYour_age));
    // printf("[increment_age()] %p\n", pYour_age);
}

// void increment_age2(int* pYour_age){
//     printf("[increment_age2()] ptr_addy pre-inc %p\n", pYour_age);
//     pYour_age++; // only increments memory addy
//     // (*pYour_age)++; // increments value at memory addy
//     printf("[increment_age2()] ptr_addy post-inc %p\n", pYour_age);
//     // printf("[increment_age()] %p\n", pYour_age);
// }

// void increment_age(int your_age){
//     printf("[increment_age()] %d\n", your_age);
//     your_age++;
//     printf("[increment_age()] %d\n", your_age);
// }

