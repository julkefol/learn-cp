#include <stdio.h>

enum DAY {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main()
{
    enum DAY today;

    today = THURSDAY;

    switch (today) {
        case SUNDAY:
            printf("Today is Sunday. It's a work day.\n");
        case MONDAY:
            printf("Today is Monday. It's a work day.\n");
        case TUESDAY:
            printf("Today is Tuesday. It's a work day.\n");
        case WEDNESDAY:
            printf("Today is Wednesday. It's a work day.\n");
        case THURSDAY:
            printf("Today is Thursday. It's a word day.\n");
        case FRIDAY:
            printf("Today is Friday, today is holiday.\n");
        case SATURDAY:
            printf("Today is Saturday, today is holiday.\n");
    }

	return 0;
}

