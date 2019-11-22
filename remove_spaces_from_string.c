#include<stdio.h>
#include<string.h>

void remove_spaces(char *str);

void main()
{
	char str[]="S aja n Ponn a pp a";
	printf("string before is %s\n",str);
	remove_spaces(str);
	printf("string after is %s\n",str);
}


void remove_spaces(char *str)
{
	int i=0,count=0;
	for(i=0;i<=strlen(str);i++)
		if(str[i]!=' ')
		{
			str[count]=str[i];
			count++;
		}
}

