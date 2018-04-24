#include<stdio.h>
int main()
{
 int a,b,count=0;
 printf("Enter two numbers");
 scanf("%d %d",&a,&b);
 while((a-b)>=0)
 {
  count++;
  a-=b;
	
}
   printf("%d\n",count);
    printf("%d",a);
   return 0;
 
}
