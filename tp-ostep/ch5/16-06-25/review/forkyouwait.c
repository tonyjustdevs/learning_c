#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[]){
    printf("hi mateys 🌍 (pid:%d)(pid:%d)\n", (int) getpid(),(int) getppid());
    int rc = fork();


    if (rc<0)
    {
        fprintf(stderr, "failed fork!\n");
        exit(1);
    }
    else if (rc==0)
    {
        int rc_wait = wait(NULL);
        printf("hi zaddy 🦍 (pid:%d)(rc:%d)(ppid:%d)\n", 
            (int)getpid(), rc, (int)getppid());
    }
    else
    {
        printf("hi kiddo 🐣 (pid:%d)(rc:%d)(ppid:%d)\n", 
            (int)getpid(), rc, (int)getppid());

    }
    
    return 0;
}