// #include <stdio.h>
// void main() {
// 	char a[20], b[20], c[20];
// 	int i, j;
// 	printf("Enter the first string : ");
// 	scanf("%s", a);
// 	printf("Enter the second string : ");
// 	scanf("%s", b);
// 	for (i=0;a[i]!='\0';i++  ) { // Complete the code in for
// 		c[i] = ; //Complete the statement
// 	}
// 	for ( ) { // Complete the code in for
// 		c[i] = ; //Complete the statement
// 		i++;
// 	}
// 	c[i] = ; //Complete the statement
// 	printf("The concatenated string = %s\n", c);
// }


#include<stdio.h>
#include<string.h>
int main(){
int len1,len2;
char str1[50];
printf("Enter the first string : ");
scanf("%s",str1);
char str2[48];
printf("Enter the second string : ");
scanf("%s",str2);

len1=strlen(str1);
len2=strlen(str2);

for(int i=0;i<len2;i++){
	str1[len1+i]=str2[i];
}
	
printf("The concatenated string = %s\n",str1);
}
























	
	
