#include <stdio.h>
int main()
{
   int num;
   printf(" Enter Any Number : ");
   scanf("%d",&num);

   if(num>0)
       printf("The Number Is Possitive.");
   else if (num<0)
       printf("The Number Is Negative.");
   else
       printf("The Number Is Zero");

    return 0;
}
