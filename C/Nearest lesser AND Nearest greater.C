#include <stdio.h>

int main() {
int n, target;
scanf("%d", &n);

int arr[n];
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}

scanf("%d", &target);

int nearestLesser = 0;
int nearestGreater = 1000;

for (int i = 0; i < n; i++) {
if (arr[i] < target && arr[i] > nearestLesser) {
nearestLesser = arr[i];
}
if (arr[i] > target && arr[i] < nearestGreater) {
nearestGreater = arr[i];
}
 }

printf("%d\n", nearestLesser);
printf("%d\n", nearestGreater);

return 0;
}


























	
	
