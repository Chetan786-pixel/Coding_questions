#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	if(n<=0){     
		printf("Invalid number\n");
		return 0;
	}

	printf("Original Scores: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}

	printf("\n");
	
	printf("Sorted Scores: ");
	
	for(int i=1;i<n;i++){
		int j=i;
		while(j>0 && arr[j]>arr[j-1]){
			int temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}


























	
	
