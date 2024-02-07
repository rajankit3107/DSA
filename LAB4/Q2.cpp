#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork(); 

    if (pid < 0) {
        
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        
        printf("hello world (pid:%d)\n", getpid());
        printf("hello, I am child (pid:%d)\n", getpid());
        
    } else {
       
        printf("hello, I am parent of %d (pid:%d)\n", pid, getpid());
        int status;
        wait(&status); 
        printf("Reading a character from the file from parent and printing it\n");
        
    }

    return 0;
}
