#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverse(char *s)
{
	char *begin=s;
	char temp;
//	int n;
//	n=strlen(str)-1;
	char *end=s;
	while(*end!='\0')
	{
		printf("%c\n",*end);
		end++;
		
	}
	end=end-1;
	while(begin<end)
	{
		temp=*begin;
		*begin++=*end;
		*end--=temp;
	}
		
}

	
	
void main()
{
	char str[]="SAJAN PONNAPPA";
	printf("Normal string is %s\n",str);
	reverse(str);
	printf("reversed string is %s\n",str);
}
