#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    // create string array

    char *pAge_chr_array[] = {"69", "420", "mate", "123"};
    
    for (int i = 0; i < 4; i++)
    {
        printf("%s ",pAge_chr_array[i]);
    }
    
    printf("\n");
    
    for (int i = 0; i < 4; i++)
    {    
        printf("%p ",pAge_chr_array[i]);//0x402008 0x40200b 0x40200f 0x402014
    }
    
    printf("\n");
    printf("pAge_chr_array      (p): [%p]\n", pAge_chr_array);      //[0x7fffd72ab1b0]
    printf("pAge_chr_array[0]   (p): [%p]\n", pAge_chr_array[0]);   //0x402008
    printf("&pAge_chr_array[0]  (p): [%p]\n", &pAge_chr_array[0]);  //[0x7fffd72ab1b0]
    // printf("pAge_chr_array[0]   (s): [%s]\n", pAge_chr_array[0]);    // 69
    // printf("*pAge_chr_array     (s): [%s]\n", *pAge_chr_array);      // 69
    
    // char *pAge_chr_array[] = {"69", "420", "mate", "123"};
    // pAge_chr_array[0] addy of "69"
    // pAge_chr_array[1] addy of "69"
    // pAge_chr_array: {0x01, 0x02, ..., 0x0n }
    // &pAge_chr_array[0] == pAge_chr_array, 
    // because pAge_chr_array decays to pointer to first element in array
    return 0;
}
 

















// printf("age     (d): [%d]\n",age);
    // printf("pAge    (p): [%p]\n",pAge);
    // printf("&age    (p): [%p]\n",&age);
    // printf("*pAge   (d): [%d]\n",*pAge);
    // printf("*&age   (d): [%d]\n\n",*&age);
    // x0                       addy
    // {1 , 2, ..., n}          int 
    // {x000, x002, ..., x00n}  addys