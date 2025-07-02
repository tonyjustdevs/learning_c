#include<stdio.h>

int main (){
    // 1. array of nums
    // 2. array of chars
    // 3. string array
    // 4. array of strs?

    int nums[]={1,2,3,69,420,666};
    for (int i = 0; i < 7; i++)
    {
        printf("%d: %d\n", i, nums[i]);
    }
    
    // a. get size of whole nums array
    printf("nums array has 6 elements, expected array size: 24 bytes (6*4)...\n");
    printf("size of nums array is [%zu] bytes\n",sizeof(nums));
    printf("divide by size of a single element [%zu] \n",sizeof(nums[0]));
    printf("expected array size: 6 (24/4), actual size: %zu",sizeof(nums)/sizeof(nums[0]));

    // b. get size of single element
    // c. calculate size of array
    
    // printf("Size of nums[5]=[%d] is [%zu] bytes\n",nums[5],sizeof(nums[5]));
    // printf("Size of nums[0]=[%d] is [%zu] bytes\n",nums[0],sizeof(nums[0]));
    return 0;
}