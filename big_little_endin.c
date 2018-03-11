#include<stdio.h>
union endian
{
	int i;
	unsigned char ch[4];

}e;
int main()
{
	e.i=0XAABBCCDD;
	if(e.ch[0]==0XDD)
	{
		printf("Underlying architecture is Little endian\n");
	}
	else
	{
		printf("Underlying architecture is Bigendian\n");
		
	}
	printf("%#X\n",e.i);
	printf("%#X\n",e.ch[0]);
	printf("%#X\n",e.ch[1]);
	printf("%#X\n",e.ch[2]);
	printf("%#X\n",e.ch[3]);
}
