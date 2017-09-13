#include <stdio.h>
#include <stdlib.h>

void PrintResults(int Counts[], int Total)
{
    int i;
    for(i = 0; i < 26; i++){
        printf("%c %d\n", i + 97, Counts[i]);
    }
    printf("Total count - %d\n", Total);
}
