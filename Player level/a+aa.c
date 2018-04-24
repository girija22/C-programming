#include<stdio.h>
int main()
{
  int a,i,s=0,j,t;
  printf("enter the value");
  scanf("%d",&a);
  for(i=0;i<4;i++)
  {
  t=a;
  for(j=0;j<i;j++)
  {
  t=t*10+a;
  }
  s=s+t;
  }
  printf("%d\n",s);
  return 0;
}  
  
  
  
  
