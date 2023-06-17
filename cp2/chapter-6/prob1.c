#include <stdio.h>

typedef struct {
    int p;
    int q;
} Rational;

Rational result;

void ifEqual(Rational num1, Rational num2)
{
    if (num1.p == num2.p && num1.q == num2.q)
        printf("Numbers are equal\n");
}

int LCM(int num1, int num2)
{
    if (num1 % num2 == 0)
        return num2;

    LCM(num2, num1%num2);
}

void Add(Rational num1, Rational num2)
{
    int gcd, big, small;

    big = num1.q > num2.q? num1.q:num2.q;
    small = num1.q > num2.q? num2.q:num1.q;

    gcd = LCM(big, small);

    gcd = (num1.q * num2.q)/gcd;

    result.q = gcd;

    num1.p = num1.p * gcd;
    num1.p = num1.p/num1.q;

    num2.p = num2.p * gcd;
    num2.p = num2.p/num2.q;

    result.p = num1.p + num2.p;
}

void Sub(Rational num1, Rational num2)
{
    int gcd, big, small;

    big = num1.q > num2.q? num1.q:num2.q;
    small = num1.q > num2.q? num2.q:num1.q;

    gcd = LCM(big, small);

    gcd = (num1.q * num2.q)/gcd;

    result.q = gcd;

    num1.p = num1.p * gcd;
    num1.p = num1.p/num1.q;

    num2.p = num2.p * gcd;
    num2.p = num2.p/num2.q;

    result.p = num1.p - num2.p;
}

void Mul(Rational num1, Rational num2)
{
    result.p = num1.p * num2.p;
    result.q = num1.q * num2.q;
}

void Div(Rational num1, Rational num2)
{
    result.p = num1.p * num2.q;
    result.q = num1.q * num2.p;

    if (result.p == result.q) {
        result.p = 1;
        result.q = 1;
    }
}

int main()
{
    Rational num1, num2;

    printf("Enter num1:\n");
    scanf("%d", &num1.p);
    scanf("%d", &num1.q);

    printf("Enter num2:\n");
    scanf("%d", &num2.p);
    scanf("%d", &num2.q);

    Add(num1, num2);
    printf("Addition: %d/%d\n", result.p, result.q);

    Sub(num1, num2);
    printf("Subtraction: %d/%d\n", result.p, result.q);

    Mul(num1, num2);
    printf("Multiplication: %d/%d\n", result.p, result.q);

    Div(num1, num2);
    printf("Division: %d/%d\n", result.p, result.q);

	return 0;
}

