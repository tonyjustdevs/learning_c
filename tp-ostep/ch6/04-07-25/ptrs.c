#include<stdio.h>

void update_value(int *pAge);

int main(){

    int age=69;
    int *pAge= &age;

    printf("[pre] %d address at: %p (&age)\n",   age, &age);
    printf("[pre] %d address at: %p (*pAge)\n\n",  age, pAge);

    update_value(&age);

    printf("[pos] %d address at: %p (&age)\n",   age, &age);
    printf("[pos] %d address at: %p (*pAge)\n\n",  age, pAge);

    return 0;
}

void update_value(int *pAge){
    (*pAge)=420;
}