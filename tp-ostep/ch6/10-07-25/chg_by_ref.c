#include<stdio.h> // https://github.com/tonyjustdevs/learning_c/issues/15
// 1. change integer by value
// void change_age(int age);
void change_age(int* pAge);

int main(){

    int age=69;
    int *pAge=&age;

    printf("age before change_age(): %d\n",age);
    
    change_age(pAge);
    
    printf("age after change_age(): %d\n",age);
    
    return 0;
}

void change_age(int* pAge){
    *pAge=420;
}