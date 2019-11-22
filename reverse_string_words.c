#include <stdio.h>
#include<string.h>
 

/*Function to reverse any sequence 
 * starting with pointer begin and 
 * ending with pointer end */
void reverse(char* begin, char* end) 
{ 
	char temp; 
	while (begin < end) { 
		temp = *begin; 
		*begin++ = *end; 
		*end-- = temp; 
	} 
} 

/*Function to reverse words*/ 
void reverseWords(char* s) 
{ 
	char* word_begin = s; 

	/*Word boundary */
	char* temp = s; 

	/*Reversing individual words as 
 * 	explained in the first step */
	while (*temp) { 
		temp++; 
		if (*temp == '\0') { 
			printf(" Character is %c\n",*temp);
			reverse(word_begin, temp - 1); 
		} 
		else if (*temp == ' ') { 
			printf(" Character space is %c\n",*temp);
			reverse(word_begin, temp - 1); 
			word_begin = temp + 1; 
		} 
	} 

	/*Reverse the entire string*/
	reverse(s, temp - 1); 
} 

int main() 
{ 
	char s[1000]="I like programming very much";
	//printf("Enter the string\n"); 
	char *temp=s;
//	char* temp = fgets(s,1000,stdin); 
//	printf("string is: %s %s\n",s, temp);
	reverseWords(s); 
	printf("%s", s); 
	getchar(); 
	return 0; 
} 

