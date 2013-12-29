/****************************************************************
**************** Author: Arijit Upadhyaya ***********************
****** Convert String to Integer ********************************
*****************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int StrToInt(char *str) {
	int slen = strlen(str);
	int i=0;
	int isNeg=0;
	int num=0;
	if(str[0]== '-') {
		isNeg=1;
		i=1;
	}	
	for(; str[i] != '\0'; i++) {
		num = num*10 + (str[i] - '0');
	}
	if(isNeg)
		return -num;
	else
		return num;
}


int main() {
	printf("Enter a number\n");
	char *str = (char *)malloc(sizeof(char));
	scanf("%s",str);
	int number=StrToInt(str);
	printf("The converted number in Int is: %d\n", number);
	return 0;
}
