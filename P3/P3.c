#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>

void main(){
    pid_t pid;
    pid = fork();
    if(pid == 0){
        printf("Hello \n");
    }else{
        sleep(1);
        printf("goodbye \n");    
    }
    return;
}