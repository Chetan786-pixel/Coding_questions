#include <stdio.h>
void main() {
	int a[3][3][3], i, j, rows, cols, pages, k;
	printf("Enter page, row and column sizes : ");
	scanf("%d %d %d",&rows,&cols,&pages  ); // Correct the code
	for (i=0;i<rows;i++ ) { // Correct the code
		for (j=0;j<cols;j++ ) { // Correct the code
			for (k=0;k<pages;k++ ) { // Correct the code
				printf("Enter the value of a[%d][%d][%d] : ", i, j, k);
				scanf("%d",&a[i][j][k]  ); // Correct the code
			}
		}
	}
	for (i=0;i<rows;i++  ) { // Correct the code
		for (j=0;j<cols;j++ ) { // Correct the code
			for (k=0;k<pages;k++ ) { // Correct the code
				printf("The value of a[%d][%d][%d] : %d\n", i, j, k,a[i][j][k]  ); // Correct the code
			}
		}
	}
}
	
	
