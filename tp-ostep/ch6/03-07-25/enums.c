#include<stdio.h>

enum Day {
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main(){

    enum Day current_day="";
    fgets(current_day, sizeof(current_day),stdin);
    
    if (current_day==Saturday||current_day==Sunday)
    {
        printf("Its day %d: it's the weekend 🥳\n", current_day);
    }
    else{
        printf("Its day %d: it's the weekday 🥲\n", current_day);
    }

    return 0;
}