#include<stdio.h>

int main(){

    // create ptr to file
    FILE *pFile=fopen("output.txt","r");
    FILE *p2File=fopen("/mnt/c/Users/tonyp/learn/os/c_programming/input_from_windows.txt","r");
    
    if (pFile==NULL||p2File==NULL)
    {   // handle error
        printf("failure!👎👎👎👎");
        return 1;
    }
    
    char input_buffer[1024]={0}; // create buffer 
    char input_buffer2[1024]={0}; // create buffer 

    // read fgets until NULL
    while (fgets(input_buffer, sizeof(input_buffer), pFile) != NULL)
    {
        printf("%s",input_buffer); // print buffer 
    }
    
    printf("\n\n");

    while (fgets(input_buffer2, sizeof(input_buffer2), p2File) != NULL)
    {
        printf("%s",input_buffer2); // print buffer 
    }

    printf("winnings! 🥇🥇🥇🥇🥇"); // handle succcess

    fclose(pFile); // close file 
    fclose(p2File);
    return 0;
}