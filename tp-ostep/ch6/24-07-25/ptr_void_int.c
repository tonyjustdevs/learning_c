// Goal: 
// - print different data types
// - with void pointers
#include<stdio.h>

// void printInteger(int *p){ //ok
//     printf("*p: [%d]", *p);
// }

void printInteger2(int *p, char format_specifier){
    if (format_specifier=='d'){
        printf("*p (d): [%d]", *p);
    } else if (format_specifier=='f'){
        printf("*p (f): [%f]", *p);
    } else if (format_specifier=='c'){
        printf("*p (c): [%c]", *p);
    } else
    printf("*Unknown data type (c): [%c]", *p);

    
    
    
}


// void printSpecified(int *p, char format_specifier){
//     printf("*p: [%d]", *p);
// }

int main(){

    int intValue = 42;
    printInteger(&intValue);
    // printData(&intValue,'d');
    // printData(&intValue,'f');
    // printData(&intValue,'c');
    return 0;
}



