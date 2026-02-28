#include <stdio.h>
void main() {
	int n, digit, product = 1, temp;
	printf("Enter an integer : ");
	scanf("%d", &n);
	
	temp=n;
	while(temp>0){
		product *= (temp % 10);
		temp/= 10;
	}
	
	
	
	printf("The product of each digit in the given number %d = %d\n", n , product );
}	
























	
	
