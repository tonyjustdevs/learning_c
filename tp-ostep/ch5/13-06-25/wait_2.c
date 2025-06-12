#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(int argc, char *argv[]){
    fprintf(stdout,"[fprintf] gday bros 👋... (pid: %d)\n",(int) getpid());
    printf("[printf] gday bros 👋... (pid: %d)\n",(int) getpid());
    int rc = fork();

    if (rc < 0) {
        fprintf(stderr, "forken error!(pid: %d)\n",(int) getpid());
        exit(1);
    }
    else if (rc == 0) { //kiddo
        prizntf("gday kiddo (pid: %d)\n", (int) getpid());
        // do we need exit(0) or _exit()? not sure yet
    }
    else { // zaddy
        int rc_wait = wait(NULL);
        printf("gday zaddy (pid: %d)(rc: %d)(rc_wait: %d)\n", (int) getpid(), rc, rc_wait);
        // program is now deterministic
        // this else statement will always wait for child process to finish b4 printing
        // after fork()
        // step 1: there are two proceses now zaddy and kiddo
        // scenario 1 (zaddy first):  
        //  - zaddy runs first, then waits for kiddo
        //  - kiddo runs and completes, returns rc to parent
        //  - parent receives rc_wait and runs and completes
        // scenario 2 (kiddo first):  
        //  - kiddo runs and completes
        //  - zaddy runs, receives rc_wait, completes
        //  - unlike scenario 1, zaddy didnt wait here since kiddo already completed.
    }
    return 0;
}