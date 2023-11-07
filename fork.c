#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int globalVariable = 2;
int main()
{
    int localVariable = 20, i = 1;
    pid_t pID = fork();
    if (pID == 0)
    {
        printf("In child process: ");
        globalVariable++;
        localVariable++;
    }
    else if (pID < 0)
    {
        printf("Failed to fork");
        exit(1);
    }
    else
        printf("Parent Process: ");
    printf("\nglobalVariable:%d", globalVariable);
    printf("\nStack variable:%d", localVariable);
    return 0;
}
