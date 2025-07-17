#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(int argc, char* argv[]){
    // printf("G'day");

    // exit early if no args

    if (argc==1)
    {
        // perror("[tp] Input error: ");
        fprintf(stderr,"%d\n", argc); 
        // fprintf(stderr,"%d\n", stderr(errno)); 
        // fprintf(stderr,"%d\n", stderr(errno)); 
        // fprintf(stderr, "Error code: %d - %s\n", errno, strerror(errno));
        // fprintf(stderr, "Error code: %d - %s\n", errno, stderr(errno));

        
        return 1;
    }
    

    for (int i = 1; i < argc; i++)
    {
        printf(" %s",argv[i]);
    }
    
    printf("\n");
    return 0;
}
// argv size: 1...n
// calculate [byte size - 1]
// argv is array of strings 
// calc argv count
