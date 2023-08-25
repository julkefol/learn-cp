#include <stdio.h>

void bubbleSort(int *A, int size)
{
    int i, j;

    for (i = 0; i < size; i++) {                    // Step 1
        for (j = 0; j < size-i-1; j++) {            // Step 2
            if (A[j] > A[j+1]) {                    // Step 3
                A[j] = A[j] - A[j+1];
                A[j+1] = A[j] + A[j+1];
                A[j] = A[j+1] - A[j];
            }
            for (int k = 0; k < size; k++)
                printf("%d ", A[k]);
            puts("");
        }
        for (int k = 0; k < size; k++)
            printf("%d ", A[k]);
        puts("");
    }
    for (int k = 0; k < size; k++)
       printf("%d ", A[k]);
    puts("");
}

int main()
{
    int ara[] = {8, 21, 3, 5, 1, 0, 123, 2, 6};
    bubbleSort(ara, 9);
    return 0;
}
