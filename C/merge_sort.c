// #include <stdio.h>

// // Function to merge two subarrays
// void merge(int arr[], int left, int mid, int right) {
// int i=left,h=left,j=mid+1,k=0,temp[right-left+1];
// 	while(h<=mid && j<=right){
// 		if(arr[h]<=arr[j]){
// 			temp[k]=arr[h];
// 			h++;
// 		}
// 		else{
// 			temp[k]=arr[j];
// 			j++;
// 		}
// 		i++;
// 	}
	
// 	if(h>mid){
// 		for(k=j;k<=right;k++){
// 			temp[k]=arr[k];
// 			i++;
// 		}
// 	}
// 		else{
// 		for(k=h;k<=mid;k++){
// 			temp[k]=arr[k];
// 			i++;
// 		}
// 		}
// 	for(k=left;k<=right;k++){
// 		arr[k]=temp[k];
// 	}

// }

// // Function to implement merge sort
// void mergeSort(int arr[], int left, int right) {
// if(left<right){
// 	int mid=(left+right)/2;
// 	mergeSort(arr,left,mid);
// 	mergeSort(arr,mid+1,right);
// 	merge(arr,left,mid,right);
// }
 
// }

// // Function to print an array
// void printArray(int arr[], int size) {
// // void display use nhi kar sakta kyoki function ka andar function use nhi hota;
// 	for(int i=0;i<size;i++){
// 		printf("%d",arr[i]);
// 		if(i<size-1) printf(" ");
// 	}
// 	printf("\n");



// }

// int main() {
//     int n;
    
//     // Input the size of the array
//     printf("");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     // Input the elements of the array
//     printf("");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Print the original array
//     printf("");
//     printArray(arr, n);

//     // Sort the array using merge sort
//     mergeSort(arr, 0, n - 1);
    
//     // Print the sorted array
//     printf("");
//     printArray(arr, n);

//     return 0;
// }

#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{
	int i = left;
	int j = mid + 1;
int t = 0;

int temp[right - left + 1];

while(i <= mid && j <= right)
{
if(arr[i] <= arr[j])
temp[t++] = arr[i++];
else
temp[t++] = arr[j++];
}

while(i <= mid)
temp[t++] = arr[i++];

while(j <= right)
temp[t++] = arr[j++];
	for(int k = 0; k < t; k++)
arr[left + k] = temp[k];
}

void mergeSort(int arr[], int left, int right)
{
if(left < right)
    {
int mid = (left + right) / 2;

mergeSort(arr, left, mid);
mergeSort(arr, mid + 1, right);
merge(arr, left, mid, right);
}
}

void printArray(int arr[], int n)
{
for(int i = 0; i < n; i++)
{
printf("%d ", arr[i]);
// if(i < n-1) printf(" ");
}
printf("\n");
}

int main()
{
int n;
scanf("%d", &n);

int arr[n];

for(int i = 0; i < n; i++)
scanf("%d", &arr[i]);

printArray(arr, n);

mergeSort(arr, 0, n - 1);

printArray(arr, n);

return 0;
}

