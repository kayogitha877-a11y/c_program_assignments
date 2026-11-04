#include <stdio.h>

int main()
{
   char val;
   printf("enter a character:");
   scanf("%c",&val);
   if((val>='a'&& val<='z') || (val>='A'&& val<='Z'))
   {
       printf("value is character");
   }
   else
   {
       printf("value is not chatacter");
   }
   return 0;
}
