// #include <stdio.h>

// int main() {
// 	int num1, num2, num3, greatest;

//     // Take input from user
// 	printf("num1: ");
//     scanf("%d",&num1);

// 	printf("num2: ");
// 	scanf("%d",&num2);


// 	printf("num3: ");
// 	scanf("%d",&num3);


//     // Find the greatest number using the conditional operator
// 	greatest = (num1>num2)&&(num1>num3)?
// 		num1:(num2>num3)?
// 		num2:num3;

//     // Display the greatest number
// 	printf("Greatest number: %d\n",greatest);

// 	return 0;
// }
#include<stdio.h>
int main(){
	int a,b,c;
	printf("num1: ");
	scanf("%d",&a);
	printf("num2: ");
	scanf("%d",&b);
	printf("num3: ");
	scanf("%d",&c);

	if(a>=b && a>=c){
		printf("Greatest number: %d\n",a);
	}
	else if(b>=a && b>=c){
		printf("Greatest number: %d\n",b);
	}
	else{
		printf("Greatest number: %d\n",c);
	}
}
























	
	
