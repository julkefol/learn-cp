#include <stdio.h>

int main()
{
    int i, n, count;

    scanf("%d", &n);

    count = 0;

    for (i = 0; i < n; i++)
        count++;

    printf("n = %d, count = %d\n", n, count);

	return 0;
}

// Operations are: 
// 1. count = 0; <-- can be ignored because it doesn't effect the complexity. 
// 2. count + 1
// 3. count = count + 1;

// This program has complexity of O(n);
