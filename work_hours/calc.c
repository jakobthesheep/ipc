#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>
#include <string.h> 
#include <stdlib.h>


int main(int argc, char * argv []) 
{ 
    printf("%d\n", argc);
    int start_hour;
    int start_min;
    int end_hour;
    int end_min;

    if (argc == 5) {
        start_hour = atoi(argv[1]);
        start_min = atoi(argv[2]);
        end_hour = atoi(argv[3]);
        end_min = atoi(argv[4]);

        printf("%d, %d, %d, %d\n", start_hour, start_min, end_hour, end_min);
        printf("%d", end_hour+12-start_hour);
        return 0; 
    } else {
        printf("Something went wrong...");
        return 1;
    }
} 