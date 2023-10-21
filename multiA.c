#include <stdio.h>

int main() {
    int n, m;
    printf("n = ");
    scanf("%d", &n);
    printf("m = ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; j++) {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum = %d\n", sum);
    int max = arr[0][0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i][0]) {
            max = arr[i][0];
        }
    }
    printf("Max = %d", max);
    return 0;
}