#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
        
        printf("Hello, I am the child process (pid: %d)\n", getpid());
    } else {
       
        printf("Hello, I am the parent process (pid: %d)\n", getpid());
        printf("Child process ID: %d\n", pid);
    }

    return 0;
}
