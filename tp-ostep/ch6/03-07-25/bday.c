#include<stdio.h>

void increment_age(int your_age);

int main(){
    int your_age = 69;

    printf("[main()] %d\n",your_age); 
    
    increment_age(your_age);

    printf("[main()] %d\n",your_age); 
    return 0;
}

void increment_age(int your_age){
    printf("[increment_age()] %d\n", your_age);
    your_age++;
    printf("[increment_age()] %d\n", your_age);
}

