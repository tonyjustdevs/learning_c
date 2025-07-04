#include<stdio.h>

int main(){
    
    char tonys_windows_output[150] = "gday mate\nbye mate\n";
    FILE *p2File = fopen("/mnt/c/Users/tonyp/learn/os/c_programming/tonys_c_output.txt", "w"); 
    // C:\Users\tonyp\learn\os\c_programming
    if (p2File == NULL)
    {
        printf("FAILED!!!");
        return 1;
    }
    
    fprintf(p2File,"%s",tonys_windows_output);
    printf("SUCCESS!!!");
    fclose(p2File); 

    return 0;
}