#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int unique[n];   // to store unique elements
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) {
        int isDuplicate = 0;
        // check if arr[i] already exists in unique[]
        for (int j = 0; j < uniqueCount; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            unique[uniqueCount++] = arr[i];
        }
    }

    // Print unique elements
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}


























	
	
