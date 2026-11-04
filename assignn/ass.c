#include <stdio.h>


int main()
{
    int a=20,b=15,c,d,e=5,f;
    c=b++;
    d=b;
    f=a>b>d>c;
    printf("%d",a+c == b>=e<c+d!=1);
    return 0;
}

