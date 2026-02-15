// #include<stdio.h>
// void main() {
// 	int i, j, k, m, n, p, q;
// 	int a[5][5], b[5][5], c[5][5];
// 	printf("Enter the row & column sizes of matrix-1 : ");
// 	scanf("%d %d", &m, &n);
// 	printf("Enter matrix-1 %d elements : ", m*n);
// 	for ( ) { // Complete the code in for
// 		for ( ) { // Complete the code in for
// 			scanf("%d", &a[i][j]);
// 		}
// 	}
// 	printf("Enter the row & column sizes of matrix-2 : ");
// 	scanf("%d %d", &p, &q);
// 	printf("Enter matrix-2 %d elements : ", p*q);
// 	for ( ) { // Complete the code in for
// 		for ( ) { // Complete the code in for
// 			scanf("%d", &b[i][j]);
// 		}
// 	}
// 	printf("The given matrix-1 is\n");
// 	// Write the code to display Matrix-1 elements
	
	
// 	printf("The given matrix-2 is\n");
// 	// Write the code to display Matrix-2 elements
	
	
// 	if ( ) { // Write the condition part
// 		for ( ) { // Complete the code in for
// 			for ( ) { // Complete the code in for
// 				c[i][j] = ; // Complete the statement
// 				for ( ) { // Complete the code in for
// 					c[i][j] = ;// Complete the statement
// 				}
// 			}
// 		}
// 		printf("Multiplication of two matrices is\n");
// 		// Write the code to display resultant matrix elements
		
		
// 	} else {
// 		printf("Multiplication is not possible\n");
// 	}
// }
#include<stdio.h>
int main(){
	int m,n;
	printf("Enter the row & column sizes of matrix-1 : ");
	scanf("%d%d",&m,&n);

	int arr[m][n];
	printf("Enter matrix-1 6 elements : ");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}

		int a,b;
	printf("Enter the row & column sizes of matrix-2 : ");
	scanf("%d%d",&a,&b);

	int brr[a][b];
	printf("Enter matrix-2 6 elements : ");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&brr[i][j]);
		}
	}

	printf("The given matrix-1 is\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}

	printf("The given matrix-2 is\n");
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			printf("%d ",brr[i][j]);
		}
		printf("\n");
	}

	if(n!=a){
		printf("Multiplication is not possible");
	}
	else{
		int result[m][b];
		int p=n;
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				result[i][j]=0;
				for(int k=0;k<p;k++){
					result[i][j] +=arr[i][k] * brr[k][j];
				}
				
			}
		}
		printf("Multiplication of two matrices is\n");
	for(int i=0;i<m;i++){
			for(int j=0;j<b;j++){
				printf("%d ",result[i][j]);
			}
		printf("\n");
	}

		
	}
	return 0;
}
























	
	
