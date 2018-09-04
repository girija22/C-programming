#include<stdio.h>
int main()
{
int a[100],i,max=0,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d\t",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("%d",max);
}
