#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter 4 numbers : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max = a, min = a;

    // Find maximum
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    // Find minimum
    if (b < min) min = b;
    if (c < min) min = c;
    if (d < min) min = d;

    printf("Max value : %d\n", max);
    printf("Min value : %d\n", min);

    return 0;
}
























	
	
