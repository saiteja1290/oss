// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
// int global = 2;
int main()
{
    pid_t childpid;
    int retval, status;
    childpid = fork();

    if (childpid >= 0)
    {
        if (childpid == 0)
        {
            printf("I am the Child, This is my ID %d\n", getpid());
            printf("This is My Parent ID %d\n", getppid());
            printf("Value of my copy of childpid %d\n", childpid);
        }
        else
        {
            printf("I am the Parent Process, my ID ->%d\n", getpid());
            printf("Value of my copy of childpid %d\n", childpid);
            printf("I will now wait for Child Process to exit \n");
            wait(&status);
            if (WIFEXITED(status))
            {
                printf("Child has exited with Status -> %d\n", WEXITSTATUS(status));
            }
            printf("Parent: Goodbye!");
        }
    }
    else
    {
        perror("fork");
        exit(0);
    }
}