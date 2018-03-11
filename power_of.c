#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value\n");
	scanf("%d",&n);
	if((n &(n-1))==0)
	printf("no. is power of 2\n");
	else
	printf("no. is not power of 2\n");
return 0;
}
