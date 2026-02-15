// #include<stdio.h>
// void main() {
// 	int i, j, m, n, r1, r2, temp;
// 	int a[5][5];
// 	printf("Enter the row & column sizes of matrix : ");
// 	scanf("%d %d", &m, &n);
// 	printf("Enter %d elements : ", m*n);
// 	for ( ) { //Write the code in for
// 		for ( ) { //Write the code in for
// 			scanf("%d", &a[i][j]);
// 		}
// 	}
// 	printf("The given matrix is\n");
// 	// Write the code to display the given matrix
	
	
// 	printf("Enter row numbers to be interchange : ");
// 	scanf("%d %d", &r1, &r2);
// 	if ( ) { // Write the condition part
// 		for ( ) { //Write the code in for
// 			temp = ; // Complete the statement
// 			a[r1][j] = ; // Complete the statement
// 			a[r2][j] = ; // Complete the statement
// 		}
// 		printf("After interchange the matrix is\n");
// 		// Write the code to display the matrix after interchange
		
		
// 	} else {
// 		printf("Interchange of rows are not possible\n");
// 	}
// }

#include<stdio.h>
int main(){
	int m,n;
	printf("Enter the row & column sizes of matrix : ");
	scanf("%d%d",&m,&n);

	int arr[m][n];
	printf("Enter %d elements : ",m*n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("The given matrix is\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	printf("Enter row numbers to be interchange : ");
	int a,b;
	scanf("%d%d",&a,&b);

	if(a<0 || a>=m || b<0 || b>=n){
		printf("Interchange of rows are not possible\n");
	}
	else{

		for(int j=0;j<n;j++){
			int temp=arr[a][j];
			arr[a][j]=arr[b][j];
			arr[b][j]=temp;
		}
		
		printf("After interchange the matrix is\n");
		for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
		}
	}
}
























	
	
