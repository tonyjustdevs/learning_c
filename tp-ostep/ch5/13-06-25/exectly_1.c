#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
int main(int argc, char *argv[]){
    fprintf(stdout,"[fprintf] gday bros 👋... (pid: %d)\n",(int) getpid());
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "forken error!(pid: %d)\n",(int) getpid());
        exit(1);
    }
    else if (rc == 0) { //kiddo
        printf("gday kiddo (pid: %d)\n", (int) getpid());
        char *myarray[3];               // create arraya
        myarray[0]="wc";                // the program
        myarray[1]="exectly_1.c";       // the args
        myarray[2]=NULL;                // NULL
        execvp("wc",myarray);           // run prog with args -> THE CHILD PROCESS HAS ENDED`
    }
    else { // zaddy
        int rc_wait = wait(NULL);
        printf("gday zaddy (pid: %d)(rc: %d)(rc_wait: %d)\n", (int) getpid(), rc, rc_wait);
    }
    return 0;
}
