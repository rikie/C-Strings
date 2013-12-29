/****************************************************************
************** Author: Arijit Upadhyaya *************************
***** Convert Integer to String *********************************
*****************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void reverseString(char *str) {
	printf("String length plain is %d\n", strlen(str));
	int slen=strlen(str)-1;
	char temp;
	int start=0;
	int end=slen;
	while(end > start) {
		temp = str[start];
		str[start] = str[end];
		str[end]= temp;
		start++;
		end--;
	}
	return;
}
char* IntToString(int num) {
	char *str = (char *)malloc(sizeof(char));
	int isNeg=0;
	int i=0;
	if(num < 0){
		num = -num;
		isNeg=1;
	}
	while(num > 0) {
		str[i++] = num%10 + '0';
		num = num/10;
	}
	if(isNeg)
		str[i++]='-';
	str[i]='\0';
	reverseString(str);
	return str;
}


int main() {
	printf("Enter a number\n");
	int num;
	scanf("%d",&num);
	char *str = (char *)malloc(sizeof(char));
	str=IntToString(num);
	printf("The converted number in string is %s\n", str);
	return 0;
}
