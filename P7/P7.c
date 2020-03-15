#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    pid_t pid;
    pid = fork();
    if(pid == 0){
        close(STDOUT_FILENO);
        printf("Esta es la respuesta en el hijo \n");
    }else{
        printf("Esta es la respuesta en el padre \n");
    }
    return;
}