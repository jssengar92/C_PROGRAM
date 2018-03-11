#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,sum,carry;
	printf("Enter Values\n");
	scanf("%d%d",&a,&b);
	carry=a&b;
	printf("carry:%d\n",carry);
	sum=a^b;
	printf("Sum:%d\n",sum);
	while(carry)
	{
		carry<<=1;
		printf("carry:...%d\n",carry);
		a=sum;
		printf("a:%d\n",a);
		b=carry;
		printf("b:%d\n",b);
		sum=a^b;
		printf("sum:%d\n",sum);
		carry=a&b;
		printf("carry:...%d\n",carry);
	}
	printf(".....Sum=%d.....\n",sum);
} 
