#include <stdio.h>
#include <stdlib.h>

int main()
{
    float average;
    int sum=0;
    int n,i,*ptr;

    printf("Enter number of blocks:\n");
    scanf("%d",&n);

    if (n<=0)
    {
        printf("Enter a positive number.\n");
        return 1;
    }

    ptr=calloc(n, sizeof(int));

    if (ptr==NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter values:\n");

    for (i=0; i<n; i++)
    {
        scanf("%d", ptr + i);
    }

    for (i=0; i<n; i++)
    {
        sum = sum+*(ptr + i);
    }

    average = (float)sum / n;

    printf("Average = %f\n", average);

    free(ptr);

    return 0;
}
