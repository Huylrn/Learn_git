#include <stdio.h>

int main() {
    int n;
    printf("n = ");
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    int sum_duong = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (arr[i] == 0) count++;
        if (arr[i] >= 0) sum_duong += arr[i];

    }
    printf("Sum = %d\n", sum);
    printf("Sum duong = %d\n", sum_duong);
    printf("So phan tu bang 0 = %d\n", count);
    return 0;
}