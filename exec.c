#include <sys/wait.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *args[])
{
    int pid;
    pid = fork();
    if (pid < 0)
    {
        fprintf(stderr, "fork failed");
        exit(-1);
    }
    else if (pid == 0)
        execlp("/bin/ls", "ls", NULL);
    else
    {
        wait(NULL);
        printf("child complete");
        exit(0);
    }
}