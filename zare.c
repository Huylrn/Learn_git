#include <stdio.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int count = 0;
    int max = arr[0];
    int index = 0;
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0) {
            count++;
            sum += arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
        if (min > arr[i]) {
            min = arr[i];
            index = i;
        }
    }
    int avg = sum / count;
    printf("Avg = %d\n", avg);
    printf("Max = %d\n", max);
    printf("Index Min = %d\n", index);
    return 0;
}