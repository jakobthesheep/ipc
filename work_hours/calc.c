#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h>
#include <string.h> 


int main(int argc, char * argv []) 
{ 
    printf("%d\n", argc);
    char * start;
    char * end;

    if (argc == 3 && strlen(argv[1]) == 4 && strlen(argv[2]) == 4) {
        start = argv[1];
        end = argv[2];
        printf("%s, %s\n", start, end);
        return 0; 
    } else {
        return 1;
    }
} 