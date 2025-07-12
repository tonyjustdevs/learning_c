#include<stdio.h>

void change_by_value(int age);
void change_by_ref(int *age);

int main(){
    int age1=69;
    int age2=69;

    // by val
    printf("pre-age-byval: [%d]\n",age1);
    change_by_value(age1);
    printf("pos-age-byval: [%d]\n\n",age1);
    
    // by ref
    printf("pre-age-byref: [%d]\n",age2);
    change_by_ref(&age2);
    printf("pos-age-byref: [%d]\n",age2);
    
    return 0;
}

void change_by_value(int age){
    age=420;
}

void change_by_ref(int *age){
    *age=666;
}


