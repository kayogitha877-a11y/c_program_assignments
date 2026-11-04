
#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    int result1, result2;

    result1 = a-- && ++b;
    printf("Result 1 = %d\n", result1);
    printf("a = %d, b = %d\n", a, b);

    result2 = --a && ++b;
    printf("Result 2 = %d\n", result2);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
