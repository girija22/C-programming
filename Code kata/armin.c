#include <stdio.h>
int main()
{
  int a,b,i,t,num,rem;
  
  scanf("%d %d", &a, &b);
  
  for(i=a+1; i<b; ++i)
  {
      t=i;
      num=0;
      while(t!=0)
      {
          rem=(t%10);
          num+=rem*rem*rem;
          t/=10;
      }
      if(i==num)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
