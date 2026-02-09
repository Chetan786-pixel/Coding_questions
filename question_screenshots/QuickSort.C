#include <stdio.h>
int partition(int arr[],int lb,int ub);
void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
		printf("\n");
	
}
// Quick Sort function
void quickSort(int arr[], int low, int high) {
   int j;
	if(low<high){
		j=partition(arr,low,high);
		quickSort(arr,low,j-1);
		quickSort(arr,j+1,high);
	}
}

int partition(int arr[],int lb,int ub){
	int pivot,down=lb,up=ub,temp;
	pivot=arr[lb];
	while(down<up){
		while(arr[down]<=pivot && down<up){
			down++;
		}
		while(arr[up]>pivot){
			up--;
		}
		if(down<up){
			temp=arr[up];
			arr[up]=arr[down];
			arr[down]=temp;
		}
	}
	arr[lb]=arr[up];
	arr[up]=pivot;
	return up;
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    // Input the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Print the original array
    printArray(arr, n);

    // Sort the array using quick sort
    quickSort(arr, 0, n - 1);
    
    // Print the sorted array
    printArray(arr, n);

    return 0;
}