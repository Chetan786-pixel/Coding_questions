#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);

	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		// m = 1 sa m tak chalga. 
	int freq[m+1];  
	int first[m+1];  // index ko represent karga 

	for(int i=0;i<=m;i++){
		freq[i]=0;
		first[i]=-1;
		
	}

	for(int i=0;i<n;i++){
			int x=arr[i];
			freq[x]++;
		if(first[x]==-1){
			first[x]=i;
		}
		
	}
	// bubble sort concept

	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			int a=arr[j];
			int b=arr[j+1];
			if(freq[a]<freq[b] || (freq[a]==freq[b] && first[a]>first[b])){
				
				int temp = arr[j] ;
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

