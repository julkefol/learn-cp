#include <stdio.h>

typedef struct {
    char first[20];
    char last[20];
} nametype;

typedef struct {
    int day;
    int month;
    int year;
} datetype;

struct NID {
    nametype my;
    nametype father;
    nametype mother;
    datetype date;
    int id;
};

char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

int main()
{
    struct NID mine;

    printf("Enter your first name: ");
    scanf("%s", mine.my.first);
    printf("Enter you last name: ");
    scanf("%s", mine.my.last);

    printf("Enter the first name of your father: ");
    scanf("%s", mine.father.first);
    printf("Enter the last name of your father: ");
    scanf("%s", mine.father.last);

    printf("Enter the first name of your mother: ");
    scanf("%s", mine.mother.first);
    printf("Enter the last name of your mother: ");
    scanf("%s", mine.mother.last);

    printf("Day of birth: ");
    scanf("%d", &mine.date.day);
    printf("Month of birth: ");
    scanf("%d", &mine.date.month);
    printf("Year of birth: ");
    scanf("%d", &mine.date.year);

    printf("\n");

    printf("Name: %s %s\n", mine.my.first, mine.my.last);
    printf("Father's name: %s %s\n", mine.father.first, mine.father.last);
    printf("Mother's name: %s %s\n", mine.mother.first, mine.mother.last);
    printf("Date of Birth: %d %s %d\n", mine.date.day, month[mine.date.month-1], mine.date.year);

    mine.id = 142356345;

    printf("Your ID NO: %d\n", mine.id);

	return 0;
}

