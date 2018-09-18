#include<stdio.h>
int main()
{
int a[100],i,x,mid,n,temp=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]<a[i+1])
{
void swap()
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
}
i=i/2;
for(i=0;i<1;i++)
{
printf("%d",a[i]);
}}
