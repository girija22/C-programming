#include<stdio.h>
int main()
{
 int a,b,c=0,i;
 printf("Enter two numbers");
 scanf("%d %d",&a,&b);
 for(i=1;i<=b;i++)
 {
   c+=a;
}
   printf("%d",c);
   return 0;
}
