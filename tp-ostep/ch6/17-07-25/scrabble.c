#include<stdio.h>
// int main(int argc, char* argv[]){

int main(int argc, int* argv[])
{
    printf("argc: [%d]", argc);

    printf("argv[1]: [%d]\n", argv[1]);

    printf("argv[1]: [%s]\n", argv[1]);
    
    printf("argv[1]: [%c]\n", argv[1]);
    
    // int some_int=69;
    
    // switch (some_int)
    // {
    // case 69:
    //     printf("raunchy winner: %d", some_int);
    //     break;
    // case 420:
    //     printf("smoken winner: %d", some_int);
    //     break;
    // default:
    //     printf("losers gonna lose: %d", some_int);
    //     break;
    // }
    return 0;
}

//ref https://cs50.harvard.edu/x/psets/2/scrabble/

// https://vscode.dev/github/tonyjustdevs/learning_c/blob/14-learn-pointers-in-c/tp-ostep/ch6/17-07-25

// [https://github.com/tonyjustdevs/learning_c/blob/14-learn-pointers-in-c/tp-ostep/ch6/17-07-25](https://github.com/tonyjustdevs/learning_c/blob/8975b00322627b6c252759b33519236896edd631/tp-ostep/ch6/17-07-25)
// https://github.com/tonyjustdevs/learning_c/blob/14-learn-pointers-in-c/tp-ostep/ch6/17-07-25
// $ ./scrabble
// Player 1: Question?
// Player 2: Question!
// Tie!