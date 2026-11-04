#include <stdio.h>

int main()
{
   int n;
   printf("enter a number:");
   scanf("%d", &n);
  printf("%s", n>0?"positive":n<0?"negative":"zero");
    return 0;
}
