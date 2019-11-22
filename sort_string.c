#include<stdio.h>
#include<string.h>

int i,n,j,l;
int count[26]={0};

void sort(char *str)
{
	printf("ENTERED %s\n",str);
	//n=strlen(str)-1;
	for(i=0;i<strlen(str);i++)
		count[str[i]-'a']++;
        printf("Next for\n");                          
	for(l=0;l<26;l++)
		for(j=0;j<count[l];j++)
			printf("%c",(char)('a'+l));
	
}
	

void main()
{
	char str[]="sajanponnappa";
	sort(str);
//	printf("Sorted string is %s",str);
}
