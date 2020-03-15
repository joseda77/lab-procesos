#include<stdio.h> 
#include<fcntl.h> 
#include<errno.h> 
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main() 
{      
    int fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    pid_t pid;
    pid = fork();
    if (pid==0){
        int sz = write(fd, "El hijo escribe\n", strlen("El hijo escribe\n"));  
        
        close(fd); 
    }else{
        int sz2 = write(fd, "El padre escribe\n", strlen("El padre escribe\n"));  
        
        close(fd);
    }
    return 0; 
} 