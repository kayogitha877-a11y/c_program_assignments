#include <stdio.h>

int main()
{
    int a[10], i;
    int even = 0, odd = 0;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    printf("Total even elements = %d\n", even);
    printf("Total odd elements = %d\n", odd);

    return 0;
}
