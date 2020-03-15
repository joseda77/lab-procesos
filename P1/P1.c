#include <unistd.h>
#include <stdio.h>

void main(){
    int x = 100;
    pid_t pid;
    pid = fork();
    if(pid == 0){
        printf("Esta es la x en el hijo: %d \n", x);
    }else{
        printf("Esta es la x en el padre: %d \n", x);
    }
    return;
}