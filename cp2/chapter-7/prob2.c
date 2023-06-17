#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareFunc(void const *a, void const *b)
{
    return (*(char *)b - *(char *)a);
}

int main()
{
    char str[] = "LoveIsTheDeathOfDuty";
    int len = strlen(str);

    qsort(str, len, sizeof(str[0]), compareFunc);

    printf("Sorted string: %s\n", str);
    
    char key, *item = NULL;

    while (1) {
        printf("Enter the (0 to exit): ");
        scanf(" %c", &key);

        if (key == '0') break;

        item = (char *)bsearch(&key, str, len, sizeof(str[0]), compareFunc);

        if (item != NULL)
            printf("Item found: %c\n", *item);
        else printf("Item not found\n");
    }

	return 0;
}

