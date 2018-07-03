#include<stdio.h>
int main()
{
int t,n,a,sum=0;
scanf("%d",&a);
t=a;
while(a>0)
{
n=a%10;
a=a/10;
sum=sum*10+n;
}
if(t==sum)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
