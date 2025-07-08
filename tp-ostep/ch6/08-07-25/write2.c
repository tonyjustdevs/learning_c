#include<stdio.h>
#include<string.h>
#include<errno.h>


int main(){ // write to output.txt

    char output_chars[] = "gday mateys\ncat says meow🐈\ngoodbye!👋...\n";

    // 1. Create FILE struct: ptr to file struct?
    FILE *pFile = fopen("output.txt", "w");
    // FILE *pFile = fopen("", "w");

    // 2. Handle NULL file ptr
    if (pFile==NULL)
    {   // www.tutorialspoint.com/cprogramming/c_error_handling.htm
        printf("error occured!! 👎\n");                 // OK
        printf("error value: [%d]\n", errno);             // OK
        printf("error descr: [%s]\n", strerror(errno));   // OK
        perror("error via perror:");       // OK
        fprintf(stderr, "eroro via fprint: [%s]\n", strerror(errno));
        return 1;
    }
    
    // 3. write to output.txt
    fprintf(pFile, "%s", output_chars);
    printf("winnerrrr 🏆");

    // fclose(pFile); // og

    if (fclose(pFile)!=0)
    {
        perror("error closing file:");
        return 1;
    }
    
    return 0;
}
//