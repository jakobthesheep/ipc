#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkexample() 
{ 
    int forkVal = fork();
    // child process because return value zero 
    if (forkVal == 0) 
        printf("Hello from Child! Fork value: %d\n", forkVal); 

    // parent process because return value non-zero. 
    else
        printf("Hello from Parent! Fork value: %d\n", forkVal); 
} 
int main() 
{ 
    forkexample(); 
    return 0; 
} 
