#include<stdio.h>
int main()
{
int a,n,count=0;
scanf("%d",&a);
for(n=2;n<a;n++)
{
if(a%n==0)
count++;
}
if(count==0)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
