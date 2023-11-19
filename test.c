#include<stdio.h>

void input(int *arr, int *n);
void MIN(int *arr, int n);
void MAX(int *arr, int n);

int main() {
    int n = 5;
    int arr[100];
    
    input(arr, &n);
    MAX(arr,n);
    MIN(arr, n);
    return 0;
}

void MAX(int *arr, int n){
    int max = arr[0];
    int max_two = arr[0];
    for (int i = 0; i < n; i++)
    {   
        if (arr[i] > max){
            max = arr[i];
        }

    }
    printf("Max = %i\n", max);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_two && arr[i] != max){
            max_two = arr[i];
        }
    }
    printf ("Max_2 = %i\n", max_two);
}

void MIN(int *arr, int n){
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {   
        if (arr[i] < min){
            min = arr[i];
        }
    }
    printf("Min = %i\n", min);
    
    int min_two = min + 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min && arr[i] != min){
            min_two = arr[i];
        }
    }
    printf ("Min_2 = %i\n", min_two);
}



void input(int *arr, int *n) {
    
    while(*n == 0) {
        printf("nhap n > 0: ");
        scanf("%d", n);
    }
    
    for(int i = 0; i < (*n); i++){
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}