#include <iostream>
using namespace std;
int main() {

    int n;
    cout << "n = ";
    cin >> n;
    int arr[10];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
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
    cout << "Avg = " << avg << endl;
    cout << "Max = " << max << endl;
    cout << "Index Min = " << index << endl;

    return 0;

}