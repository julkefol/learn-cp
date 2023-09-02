#include <stdio.h>
#include "selection-sort.h"
#include "bubble-sort.h"
#include "insertion-sort.h"

int main()
{
    int ara[] = {5, 1, 3, 0, 11, 4, -1};
    bubbleSort(ara, 7);
    /* selectionSort(ara, 7); */
    /* insertionSort(ara, 7); */

    for (int i = 0; i < 7; i++) {
        printf("%d ", ara[i]);
    }

	return 0;
}

