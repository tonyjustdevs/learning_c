#include<stdio.h>

int main(){

    int some_arr[4]={420, 69, 666, 123};

    for (int i = 0; i < 4; i++)
    {
        // printf("%d ", so me_arr[i]);
        printf("%p ", &some_arr[i]);
    }
    return 0;
}