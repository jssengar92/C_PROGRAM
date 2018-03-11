#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e,f;
	float s,g,h,r1,r2;
	printf("Enter constant:");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b-4*a*c);
	if(a==0 && b==0)
	{
		printf("There is no solution\n");
	}
	else if(a==0)
	{
		e=-c/b;
		printf("There is only one root:%d\n",e);
	}
	else if(d<1)
	{
		printf("Roots are complex\n");
		f=abs(d);
		s=sqrt(f);
		printf("root1=%d+j%f\n",-b/(2*a),s/(2*a));
		printf("root2=%d-j%f\n",-b/(2*a),s/(2*a));
	}
	else if(d>1)
	{
		printf("d=%d\n",d);
		s=sqrt(d);
		printf("s=%f\n",s);
		g=(-b+s)/(2*a);
		h=(-b-s)/(2*a);
		printf("root1=%f\n",g);
		printf("root2=%f\n",h);
		
	}
	return 0;
}
