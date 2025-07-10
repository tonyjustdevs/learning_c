#include<stdio.h> // https://github.com/tonyjustdevs/learning_c/issues/15
// 1. change integer by value
void change_age(int age);

int main(){

    int age=69;

    printf("age before change_age(): %d\n",age);
    
    change_age(age);
    
    printf("age after change_age(): %d\n",age);
    
    return 0;
}

void change_age(int age){
    age=420;
}