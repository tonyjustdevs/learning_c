#include<stdio.h>
#include<string.h>

int main(){
    
    char a_cool_name[100];
    printf("enter two numbers: ");
    int magic_no;
    int magic_no2;
    int rv = scanf("%d %d",&magic_no, &magic_no2); // provide type & addy
    
    printf("enter a cool name: ");
    int rv2 = scanf("%s", a_cool_name);

    // results
    printf("magic_no1[-d]: %d (RV: %d, Expected RV: 2)\n", magic_no,   rv);
    printf("magic_no2[-d]: %d (RV: %d, Expected RV: 2)\n", magic_no2,  rv);
    printf("cool_name[-s]: %s (RV: %d, Expected RV: 1)\n", a_cool_name,rv2);


    return 0;

}
