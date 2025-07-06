#include<stdio.h>

int main(){
    int player_nbr;
    printf("How many players are you entering? ");
    scanf("%d",&player_nbr);
    
    printf("Number of Players: %d\n",player_nbr);


    // calcualte bytes to reserve
    // malloc(nbr_of_bytes)

    return 0;
}

// #include <stdio.h>

// int main() {
//     int num;
//     float fnum;
//     printf("Enter an integer and a floating-point number: ");
//     scanf("%d %f", &num, &fnum);
//     printf("You entered %d and %f\n", num, fnum);
//     return 0;
// }
