#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(int argc, char *argv[]){
    fprintf(stdout,"[fprintf] gday bros 👋... (pid: %d)\n",(int) getpid());
    printf("[printf] gday bros 👋... (pid: %d)\n",(int) getpid());
    int rc = fork();

    if (rc < 0) {
        fprintf(stderr, "forken error!(pid: %d)\n",(int) getpid());
        exit(1);
    }
    else if (rc == 0) { //kiddo
        printf("gday kiddo (pid: %d)\n", (int) getpid());
    }
    else { // 
        
        printf("gday zaddy (pid: %d)(rc: %d)\n", (int) getpid(), rc);
    }
    return 0;
}