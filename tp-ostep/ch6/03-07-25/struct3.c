#include<stdio.h>
#include<stdbool.h>
#include<string.h>

// struct Student{
//     char name[50];
//     int age;
//     float gpa;
//     bool isFullTime;
// };

typedef struct{
    char name[50];
    int legs;
    char sex;
    bool isDesexed;
}Dog;

void printDoggo(Dog doggo);

int main(){
    Dog dog2 = {0};
    printDoggo(dog2);
    
    // update doggo
    strcpy(dog2.name,"jocey");
    dog2.legs=6;    
    dog2.sex='m';    
    dog2.isDesexed=true;    
    
    
    printDoggo(dog2);
    
    return 0;
}



void printDoggo(Dog doggo){
    printf("dog_name: %s\n",           doggo.name);
    printf("dog_legs: %d\n",           doggo.legs);
    printf("dog_sex: %c\n",            doggo.sex);
    printf("dog_isDesexed: %s\n\n",   (doggo.isDesexed)? "balls":"no balls");
}