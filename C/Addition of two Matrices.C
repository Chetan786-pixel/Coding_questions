#include<stdio.h>
int main(){
	int m,n;
	printf("Size of mat1: ");
	scanf("%d%d",&m,&n);

	int arr[m][n];
	printf("mat1: ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	int a,b;
	printf("Size of mat2: ");
	scanf("%d%d",&a,&b);

	int brr[a][b];
	printf("mat2: ");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&brr[i][j]);
		}
	}

	printf("mat1\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("mat2\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",brr[i][j]);
		}
		printf("\n");
	}

	
	if(m!=a || n!=b){
		printf("Addition is not possible\n");
		return 0;
	}
	
	int c[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j]=arr[i][j] + brr[i][j];
		}
	}

	printf("Addition\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}

}
	
	
