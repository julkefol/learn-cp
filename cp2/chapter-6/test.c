#include <stdio.h>


int main()
{
    struct { int id; char a;} name;
    name.id = 1;
    name.a = 'b';

    printf("%d %c\n", name.id, name.a);

	return 0;
}

