#include<stdio.h>

int main()
{
   int a,b ,c;
   printf("Enter two numbers to be added:\n");
   scanf("%d %d",&a,&b);
   c = a+b;
   printf("\n Total Sum = %d",c);
   c = a-b;
   printf("\n Difference = %d",c);
   c = a/b;
   printf("\n Divison = %d",c);
   c = a*b;
   printf("\n Multiplication= %d",c);
   c = a|b;
   printf("\n Bitwise= %d",c);
   return 0;
}
