#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[]){
    printf("hi mateys 🌍 (pid:%d)(pid:%d)\n", (int) getpid(),(int) getppid());
    int rc = fork();

    if (rc<0) {
        fprintf(stderr, "failed fork!\n");
        exit(1);
    }
    else if (rc==0) {
        printf("hi word-count-kiddo 🐣 (pid:%d)(rc:%d)(ppid:%d)\n",  (int)getpid(), rc, (int)getppid());
        char *myarr[4];
        myarr[0] = "wc";
        myarr[1] = "exectly.c";
        myarr[2] = "--lines";
        myarr[3] = NULL;
        execvp(myarr[0], myarr);
        printf("this doesnt print");s
    }
    else {
        int rc_wait = wait(NULL);
        printf("hi zaddy 🦍 (pid:%d)(rc:%d)(ppid:%d)\n",  (int)getpid(), rc, (int)getppid());
    }
    
    return 0;
}
