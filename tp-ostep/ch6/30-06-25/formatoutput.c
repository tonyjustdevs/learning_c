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
    int int1  = 10;
    int int2  = -10;
    printf("format specifiers:\n");
    printf("d (+10)  : %d\n",int1);
    printf("5d (+10) : %5d\n",int1);   // r-adjust
    printf("-5d (+10): %-5d\n",int1); // l-adjust

    printf("05d (+10): %05d\n",int1);  // leading zeros
    printf("+5d (+10): %+5d\n",int1);  // + or -
    printf("-5d (-10): %-5d\n",int2);  // + or -

    printf("+05d (+10): %+05d\n",int1); // lead zeo and +/-s
    printf("-05d (-10): %+05d\n",int2); // lead zeo and +/-s


    printf("precision specifiers:\n");

    float px1  = 19.99;
    float px2  = -1.50;
    float px3  = -100.00;
    
    printf("19.99 7.f: %7.f\n", px1); 
    printf("19.99 7.1f: %7.1f\n", px1);
    printf("19.99 7.2f: %7.2f\n", px1); // width 7.2dp
    printf("19.99 7.3f: %7.3f\n", px1);
    printf("19.99 7.4f: %7.4f\n", px1);
    printf("19.99 7.5f: %7.5f\n", px1);
    
    printf("-1.50 -8.f: %-8.f\n", px2); 
    printf("-1.50 -8.1f: %-8.1f\n", px2);
    printf("-1.50 -8.2f: %-8.2f\n", px2); // width 7.2dp
    printf("-1.50 -8.3f: %-8.3f\n", px2);
    printf("-1.50 -8.4f: %-8.4f\n", px2);
    printf("-1.50 -8.5f: %-8.5f\n", px2);
    
    
    
    
    
    
    return 0;
}