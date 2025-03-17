#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    
    if (argc != 3)
    {
        printf("2 arguments required!\n");
        exit(-1);
    }
    
    int i;
    int lower = atoi(argv[1]); // converts strings into integers
    int higher = atoi(argv[2]);

    for(i = lower; i <= higher; i++)
    {
        printf("%d\n", i);
    }



    return 0;
    
} 