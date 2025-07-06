#include<stdio.h>
#include<string.h>
#include<errno.h>


int main(){

    char output[]="first line\nsecond line\n3rd line"; // create output
    
    // write succesfully
    FILE *pFile = fopen("","w"); // create ptr
    // FILE *pFile = fopen("proper_output.txt","w");
    if (pFile==NULL) // write with error
    {
        perror("a cool error msg from pmerror():");
        return 1;
    }
    
    // write succesfully

    return 0;
    // write succesfully
    // write succesfully
    // write succesfully
}