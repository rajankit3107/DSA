#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    printf("hello world (pid:%d)\n", getpid());

    pid = fork();

    if (pid < 0) {
       
        fprintf(stderr, "Fork failed\n");
        return 1;
    } else if (pid == 0) {
      
        printf("hello, I am child (pid:%d)\n", getpid());
    } else {
        
        printf("goodbye, I am parent of %d (pid:%d)\n", pid, getpid());
    }

    return 0;
}
