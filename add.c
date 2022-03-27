#include<stdio.h>

int main()
{
   int a,b ,c;
   printf("Enter two numbers to be added:\n");
   scanf("%d %d",&a,&b);
   c = a+b;
   printf("\n Total Sum = %d",c);
   c = a/b;
   printf("\n Difference= %d",c);
   return 0;
}