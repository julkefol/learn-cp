void selectionSort(int *ara, int size)
{
    int i, j, min_index, temp;

    for (i = 0; i < size; i++) {
        min_index = i;
        for (j = i+1; j < size; j++) {
            if (ara[j] < ara[min_index])
                min_index = j;
        }
        if (min_index != i) {
            temp = ara[i];
            ara[i] = ara[min_index];
            ara[min_index] = temp;
        }
    }
}
