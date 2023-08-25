int binarySearch(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == x)
            return mid;     // desired element has been found
        if (A[mid] < x)
            left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

/* Space complexity O(1)
 * Time complexity O(log n)
 */
