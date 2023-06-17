#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *marks;
    int i, n;

    printf("Please enter the number of students: ");
    scanf("%d", &n);

    // allocate memory using calloc
    marks = (int *)calloc(n, sizeof(int));

    //see if the values are zero
    for (i = 0; i < n; i++) 
        printf("%d\n", marks[i]);

    printf("Now enter marks for each students:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &marks[i]);
    
    printf("Here is the result:\n");
    for (i = 0; i < n; i++) 
        printf("%d\n", marks[i]);

    // free the memory
    free(marks);

	return 0;
}

