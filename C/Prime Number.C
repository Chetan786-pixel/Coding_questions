#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);

	int a=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			a=1;
			break;
		}
	}

	// if(n==1){
	// 	printf("Nither prime nor composite\n");
	// }
	 if(a==1){
		printf("Not Prime\n");
	}
	else{
		printf("Prime\n");
	}
	return 0;
}


























	
	
