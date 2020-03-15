#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char *path = getenv("PATH");
    char  pathenv[strlen(path) + sizeof("PATH=")];
    char * const ptr[]={"/bin/ls",NULL}; 
    char* env_list[] = { "SOURCE=MYDATA", "TARGET=OUTPUT", "lines=65", NULL};
    char *envp[] = {pathenv, NULL};
    char *tests[] = {"ls", "-lR", NULL};
    execle( "myprog","myprog", "ARG1", "ARG2", NULL, env_list );
    execv("ls", ptr);
    execvpe(tests[0], tests, envp);
    exit(0);
    return;
}