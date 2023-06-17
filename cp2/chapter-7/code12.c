#include <stdio.h>
#include <stdlib.h>

int compareFunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int key, *item = NULL, n = 5;
    int values[] = {1, 2, 5, 8, 10};

    while (1) {
        printf("Enter the value of key (0 to exit): ");
        scanf("%d", &key);

        if (key == 0) break;

        item = (int *)bsearch(&key, values, n, sizeof(values[0]), compareFunc);

        if (item != NULL)
            printf("Item found: %d\n", *item);
        else printf("Item not found in the array\n");
    }

	return 0;
}
