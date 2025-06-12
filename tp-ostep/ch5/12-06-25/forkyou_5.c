#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    printf("gday mateys 🌍... (pid: %d)\n", getpid());
    int rc = fork();
    
    if (rc < 0)
    {
        fprintf(stderr, "fork failed!\n");
        exit(1);
    }
    else if (rc == 0)
    {
        printf("hello kiddo_🐣! (pid: %d)(daddy_🦍: %d)(rc:%d)\n", getpid(), getppid(), rc);
    }
    else
    {
        printf("hello daddy_🦍! (pid: %d)(kiddo_🐣: %d)\n", getpid(), rc);
    }
    return 0;
}