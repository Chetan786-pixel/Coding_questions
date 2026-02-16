#include <stdio.h>
void main() {
	int arr[20], number, sum = 0, min = 0, max = 0;
	scanf("%d", &number);
	printf("Elements: ");
	for (int i = 0; i < number; i++) {
		scanf("%d", &arr[i]);	
	}
min=arr[0];
	for(int i=1;i<number;i++){
		if(min>arr[i]){
		min=arr[i];
		}
	}
	max=arr[0];
	for(int i=1;i<number;i++){
		if(max<arr[i]){
		max=arr[i];
		}
	}

	float average;
	for(int i=0;i<number;i++){
		sum+=arr[i];
	}
	
	average=(float)sum/number;
	
	
	printf("Min,max,avg: %d %d %0.2f",min,max,average );
}
























	
	
