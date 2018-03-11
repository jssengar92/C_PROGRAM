#include<stdio.h>
#include<stdlib.h>
int fibo(int);
int main()
{
	int n,i,k;
	printf("Enter maximum length of fibonacci series\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d ",fibo(i));
		//i++;
	}
}

int fibo(int i)
{
	if(i==0)
	return 0;
	else if(i==1)
	return 1;
	else
	return (fibo(i-1)+fibo(i-2));
}
		
