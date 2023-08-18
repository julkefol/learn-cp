#include <stdio.h>

int binarySearch(int A[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n-1;

    while (left <= right) {
        mid = (left + right) / 2;
        if (A[mid] == x)
            return mid;
        if (A[mid] < x)
            left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}

int main()
{
    int ara[100];

    for (int i = 0; i < 100; i++)
        ara[i] = i;

    int n, pos = 1;
    while (pos >= 0) {
        scanf("%d", &n);
        pos = binarySearch(ara, 100, n);
        printf("%d\n", pos);
    }

	return 0;
}

