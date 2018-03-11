#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *str1,*str2;
	int i,j,k,m=0,o;
	str1=(char *)malloc(sizeof(char));
	str2=(char *)malloc(sizeof(char));
	printf("Enter String1:");
	gets(str1);
	printf("Enter String2:");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
	{
		printf("String[%d]=%c\n",i,*(str1+i));
	}
	for(j=0;str2[j]!='\0';j++)
	{
		printf("String[%d]=%c\n",j,*(str2+j));
	}
	printf("string1: %s i is %d\n",str1,i);
	printf("string2: %s j is %d\n",str2,j);
	o=i+j;
	for(k=i;k<o;k++)
	{
		*(str1+k)=*(str2+m);
			m++;
	}
	printf("Concatetinated String:%s\n",str1);
	return 0;	
}
