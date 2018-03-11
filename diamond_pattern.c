#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,space,temp;
	printf("enter value of n\n");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<(2*i);k++)
		{
			printf("*");
		}
		printf("\n");
	}
	temp=1;
	for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=temp;j++)
		{
			printf(" ");
		}
		temp++;
		for(k=1;k<(i*2);k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
