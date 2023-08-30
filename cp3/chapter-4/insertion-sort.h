void insertionSort(int A[], int size)
{
    int i, j, item;
    
    for (i = 1; i < size; i++) {
        item = A[i];    // Assign A[i] to item
     
        j = i - 1;
        while (j >= 0 && A[j] > item) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = item;
    }
}
