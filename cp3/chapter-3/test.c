#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "binary-search.h"

int main()
{
    int size = (unsigned int)pow(2.0, 32.0);
    int *ara = malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++)
        *(ara + i) = i+1;

    int result = binarySearch(ara, size, 4194245);

    printf("%d\n", result);
    
    free(ara);
    return 0;
}
