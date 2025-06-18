#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main (int argc, char *argv[]){
    printf("gday all 🌍 (pid:%d)\n",(int) getpid());
    int rc = fork();
    
    if (rc<0) {
        fprintf(stderr, "failed fork (pid:%d)\n",(int) getpid());
        exit(1);
    }
    else if (rc==0) {
        printf("hello kiddo 🐣(pid:%d)(rc:%d)\n",(int) getpid(),rc);
        exit(0);
    }
    else { // rc>0
        int rc_wait = wait(NULL);
        printf("hello zaddy 🦍(pid:%d)(rc:%d)(ppid:%d)(rc_wait:%d)\n",
            (int) getpid(), rc, (int) getppid(), rc_wait);
    }
    printf("gbye all 🌍 (pid:%d)\n",(int) getpid());
    return 0;
}