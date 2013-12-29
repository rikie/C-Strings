/****************************************************************
**************** Author: Arijit Upadhyaya ***********************
*** Count number of words: Delimiter space, newline and tabs ****
*****************************************************************/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

unsigned int CountWords(char *str) {
	int isValidChar = 0;
	int wc=0;
	while(*str) {
		if(*str == ' ' || *str == '\n' || *str == '\t')
			isValidChar=0;
		else if(isValidChar==0) {
			isValidChar=1;
			++wc;
		}
		str++;
	}
	return wc;
}
	

int main(){
	char str[] ="Hello World is very good!!		\n haha \t arijit		lol";
	printf("Number of words are: %d\n", CountWords(str));
	return 0;
}
