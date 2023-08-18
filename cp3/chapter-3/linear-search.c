int linearSearch(int A[], int n, int x)
{
    int i;

    for (i = 0; i < n; i++) {
        if (A[i] == x)
            return i;
    }
    return -1;
}

/* Space complexity is O(1)
 * Time complexity is O(n)
 */
