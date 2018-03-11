#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,r=0,num;
	printf("Enter a number:\n");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=r*10;
		r=r+n%10;
		n=n/10;
	}
	printf("Reverse number is %d\n",r);
	if(num==r)
		printf("Palindrome number\n");
	else
		printf("Not a Palindrome\n");
	return 0;
}
