#include <stdio.h>
#include <stdlib.h>

void PrintResults(int counts[], int Total)
{
    int i;
    for(i = 0; i < 26; i++){
        printf("%c %d\n", i + 97, counts[i]);
    }
    printf("Total count - %d\n", Total);
}
