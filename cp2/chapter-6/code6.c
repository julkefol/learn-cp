#include <stdio.h>

struct nametype {
    char first[20];
    char last[20];
};

struct studenttype {
    int id;
    struct nametype name;
};

int main()
{
    struct studenttype students[5];

    int i, n = 5;

    for (i = 0; i < n; i++) {
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &students[i].id);
        printf("Now enter the first name: ");
        scanf("%s", students[i].name.first);
        printf("And last name: ");
        scanf("%s", students[i].name.last);
    }

    printf("\nOutput:\n");

    for (i = 0; i < n; i++) {
        printf("ID: %d\n", students[i].id); 
        printf("Name: %s %s\n", students[i].name.first, students[i].name.last);
    }

	return 0;
}

