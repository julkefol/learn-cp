void bubbleSort(int *A, int size)
{
    int i, j;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size-i-1; j++) {
            if (A[j] > A[j+1]) {
                A[j] = A[j] - A[j+1];
                A[j+1] = A[j] + A[j+1];
                A[j] = A[j+1] - A[j];
            }
        }
    }
}
