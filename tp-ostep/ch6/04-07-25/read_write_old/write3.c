#include<stdio.h>

int main(){
    
    char tonys_windows_output[150] = "gday mate\nbye mate\n";
    FILE *p2File = fopen("C:\\Users\\tonyp\\learn\\os\\c_programming\\tonys_c_output.txt", "w"); 
    fprintf(p2File,"%s",tonys_windows_output);
    fclose(p2File); 

    return 0;
}