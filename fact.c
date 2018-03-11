#include<stdio.h>
#include<stdlib.h>
int fact (int );
int main()
{
	int n;
	printf("Enter number whose factroialu want u find\n");
	scanf("%d",&n);
	printf("Factorial of %d is %d\n",n,fact(n));
	return 0;
}

int fact( int n )
{
	if(n!=1)
		return n*fact(n-1);
}
