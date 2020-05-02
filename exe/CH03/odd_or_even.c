#include <stdio.h>

long func(unsigned long);
int main(void)
{
    unsigned long a;
    long r;
    scanf("%ld", &a);
    r = func(a);
    printf("r = %ld", r);
    return 0;
}

long func(unsigned long x)
{
    long val = 1;
    while (x)
    {
        val ^= x;
        x >>= 1;
    }
    return ~val & 1;
}