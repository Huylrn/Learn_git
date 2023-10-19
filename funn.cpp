#include <iostream>
using namespace std;
int main() {
    int a;
    int sum = 0;
Again:
    cout << "Nhập a = ";
    cin >> a;
    if (a > 100 && a < 200 && a % 3 == 0) {
        for (int i = 1; i <= a; i++) {
            sum +=i;
        }
        cout << "Tổng = " << sum;
    }
    else {
        cout << "Error" << endl;
        goto Again;
    }

    return 0;
}
