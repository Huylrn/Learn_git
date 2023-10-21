#include <iostream>
using namespace std;
int main() {

    int n,m;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];   
        }

    }

    cout << endl;
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";   
        }
        cout << endl;

    }

    int sum = 0;
    for (int i = 0; i < n; i++) {

        if (i % 2 == 0) {

            for (int j = 0; j < m; j++) {

                sum += arr[i][j];

            }
        }

    }
    cout << "Sum = " << sum << endl;

    int max = arr[0][0];
     for (int i = 0; i < n; i++) {

        if (max < arr[i][0]) {

            max = arr[i][0];

        }

    } 
    cout << "Max = " << max;



    return 0;

}