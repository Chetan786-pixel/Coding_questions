#include <stdio.h>
void main() {
	char str1[50], str2[50];
	int i;
	printf("Enter a string : ");
	scanf("%s", str1);
	for (i=0 ;str1[i]!='\0' ;i++ )  { //Complete the code in for
		str2[i] =str1[i] ;
	}
	str2[i] ='\0' ; //Complete the statement
	printf("The copied string = %s\n", str2);
}
























	
	
