#include <stdio.h>
int main()
{
    int a=20,b=10,result;
    result = a>b&& b!=10 &&b<1&& a>5;
    printf("%d", result);

    return 0;
}
