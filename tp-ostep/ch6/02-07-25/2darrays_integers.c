#include<stdio.h>
#include<string.h>

int main(){

    // 1. create 2d array of nums
    // 2. create 2d array of chars
    // 3. create 2d array of strings
    // 4. accept user input to create 2d array

    int nums[][3]={ {1,2,3},
                    {4,5,6},
                    {7,8,9}}; //nums[][cols]

    for (int i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",nums[i][j]);
        }
        printf("\n");
    }

    return 0;
}