#include<stdio.h>
#include<string.h>
//use typdef: to create aussie state/try codes [2-3 letters max]

int main (){

    // 1. create char version
    #define NO_OF_STATES    3
    #define MAX_CHR_STATES  4
    char States[NO_OF_STATES][MAX_CHR_STATES] = {0};

    States[0] = "QLD";
    // char States[1] = "SA";
    // char States[2] = "NSW";


    // for (char i = 0; i < 3; i++)
    // {
    //     printf("%s\n",States[i]);   
    // }
    

    // 2. create typedef version
    return 0;
}
