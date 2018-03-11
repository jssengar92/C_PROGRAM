#include<stdio.h>
int main()
{
	int a,b,c,x,y,z,lcm,hcf,r,lcm1;
	printf("Enter three number\n");
	scanf("%d%d%d",&x,&y,&z);
	a=x;
	b=y;
	c=z;
	while(x!=0)
	{
		r=y%x;
		y=x;
		x=r;
	}
	lcm=(a*b)/y;
	while(y!=0)
	{
		r=z%y;
		z=y;
		y=r;
	}
	hcf=z;
	lcm1=(lcm*c)/hcf;
	printf("LCM:%d",lcm1);
	printf("HCF:%d",hcf);
return 0;
}
