#include<stdio.h>
void main()
{
	int count;
	count=10;
	printf("global count : %d\n", count);
	if(count==10)
	{
		int count;  
		count = 9;
		printf("local count: %d\n", count);
	}
	printf("global count : %d\n", count);
}

