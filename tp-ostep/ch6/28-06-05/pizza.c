#include <stdio.h>

int main(){
    // float gpa = 2.5; // floats 6dp
    // double pi = 3.14159265358979; //floats 16dp
    // printf("🍌 - i like bananas\n");
    // printf("🎓 - gpa is: %.2f\n",gpa);
    // printf("🥧 - pi is: %lf (default 6dp)\n",pi);
    // printf("🥧 - pi is: %.15lf (custom 15dp)\n",pi);
    
    // int, float 4b
    // double 8b
    // char 1b,bool 1b
    // char[] arr of chars
    

    // format specifiefs: dbl: %f / %lf, %d decimal %c char, %s string
    // width %4d: 4 spaces %-4d left adjusted
    int int1  = 100;
    printf("%d",int1);
    printf("%4d",int1);
    printf("%-4d",int1);

    return 0;
}