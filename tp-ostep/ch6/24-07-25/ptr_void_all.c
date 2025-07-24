// Goal: [a] print different data types + [b] with void pointers
#include<stdio.h>

void printInteger2(void *p, char format_specifier){
    if (format_specifier=='d'){
        printf("*p (d): [%d]\n", *((int*)p));
    }  else if (format_specifier=='f'){
        printf("*p (E): [%E]\n", *((float*)p));
    } else if (format_specifier=='c'){
        printf("*p (c): [%c]", *((char*)p));
    } else {
    printf("*Unknown data type (c): [%c]", *((char*)p));
}
}

int main(void){
    
    int intValue = 42;
    printInteger2(&intValue,'d');
    printInteger2(&intValue,'f');
    printInteger2(&intValue,'c');
    return 0;
}







// --- old code --- //
// void printInteger(int *p){ //ok
//     printf("*p: [%d]", *p);
// }
