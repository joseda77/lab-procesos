#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(){
    int pid_proceso = getpid();
    int status;
    pid_t pid;
    pid_t wpid;
    pid = fork();
    if(pid == 0){
        //wpid = waitpid(pid, &status, 0);
        //printf("Esta es la respuesta en el hijo: %d \n", wpid);
        printf("Esta es la respuesta en el hijo \n");
    }else{     
        wpid = waitpid(pid, &status, 0);
        printf("Esta es la respuesta en el padre: %d \n", wpid);
        //printf("Esta es la respuesta en el padre \n");
    }
    return;
}