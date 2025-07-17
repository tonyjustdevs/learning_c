#include<stdio.h>

#define SIZE_ARRAY 50

// 1. [global] add cls struct_arr (s_arr) + 50 arr size + tag_name
    typedef struct struct_array {
// declare char arr + size
        char v[SIZE_ARRAY];
    } t_array;

int main(){

// 2. [global] find_42(): finds integer value [struct_arr] instance

// 3. [main] 
    // a. add instance of struct_arr
    t_array t_array_instance;
    printf("t_arry size (bytes): [%zu]\n    \n",sizeof(t_array_instance.v)); // 50 = 50*1

    // b. assign target value randomly to s_arr member
    t_array_instance.v[10]=42;
    // t_array_instance.v[10]="69";
    // c. run find_42()2

    for (int i = 0; i < SIZE_ARRAY; i++)
    {
        if (i%10==0)
        {
            printf("\n");
        };
        
        printf("v[%d]: [%c],", i, t_array_instance.v[i]);
    }
    

    return 0;
}