
#include<stdio.h>
int main()
{
	char z;
	scanf("%c",&z);
	if(z>='a'&& z<='z'||z>='A'&& z<='Z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("No");
	}
	return 0;
}

