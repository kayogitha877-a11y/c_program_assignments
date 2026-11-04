#include <stdio.h>

int main()
{
    float temp;
    printf("Enter a temperature:");
    scanf("%f",&temp);
    temp<0 ? printf("freezing"):
    temp>35? printf("Hot"):
             printf("normal");

    return 0;
}
