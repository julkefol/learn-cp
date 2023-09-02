void bubbleSort(int *A, int size)
{
    int i, j, changed, temp;

    for (i = 0; i < size; i++) {
        changed = 0;
        for (j = 0; j < size-i-1; j++) {
            if (A[j] > A[j+1]) {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                changed = 1;
            }
        }
        if (changed == 0)
            return;
    }
}
