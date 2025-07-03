#include<stdio.h>
#include<stdbool.h>

struct Student{
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
};

typedef struct{
    char name[50];
    int legs;
    char sex;
    bool isDesexed;
}Dog;

int main(){

    struct Student student1 = {"messi", 37, 4.20, true};
    
    printf("student1_name: %s\n",student1.name);
    printf("student1_age: %d\n",student1.age);
    printf("student1_gpa: %f\n",student1.gpa);
    // printf("student1_isFullTime: %d\n\n",student1.isFullTime);
    printf("student1_isFullTime: %s\n\n",(student1.isFullTime) ? "yes":"bludger");
    
    Dog dog1 = {"Lucky", 4, 'M', false};
    printf("dog1_name: %s\n",           dog1.name);
    printf("dog1_legs: %d\n",           dog1.legs);
    printf("dog1_sex: %c\n",            dog1.sex);
    printf("dog1_isDesexed: %s\n\n",    (dog1.isDesexed)? "no balls":"big balls");

    
    return 0;
}