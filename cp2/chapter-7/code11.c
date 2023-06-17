#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareFunc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

/*
int compare(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}
*/

int main()
{
    int i, n = 5;
    int values[] = {65, 6, 100, 1, 250};

    /*
    char str[] = "Bangladesh";
    int len = strlen(str);
    */

    qsort(values, n, sizeof(values[0]), compareFunc);
    //qsort(str, len, sizeof(str[0]), compareFunc);

    for (i = 0; i < n; i++)
        printf("%d ", values[i]);
    puts("\n");

    /*
    printf("%s\n", str);
    puts("\n");
    */

	return 0;
}

