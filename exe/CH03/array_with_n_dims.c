#include <stdio.h>

int main(void)
{
    int a[2][2] = {1, 2, 3, 4};
    printf("%d", *(a[1] + 1));
    int *p;
    int (*q)[2];
    q = a;     // a pointer to 1-dimensional arry
    p = a[1];  // a pointer to int
    printf("%d", a[1][1]++);
    printf("%d", (*p++));
    printf("%d", ++*((*++q)+1));

    return 0;
}