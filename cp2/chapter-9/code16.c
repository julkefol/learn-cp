#include <stdio.h>

typedef int * ip;
typedef int a100[100];
typedef int (*fp)(int);

int main()
{
    ip a, b, c;     // a, b, c are integer pointer
    a100 p, q;      // p, q bot are array of 100 integer
    fp f1, f2;      // f1, f2 both are pointer to functions
                    // which take one integer parameter as input
                    // and returns an integer

	return 0;
}


