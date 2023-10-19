#include <iostream>
using namespace std;
int main() {
    int a; // Tạo biến a. 
    int sum = 0; // Tạo biến sum, gắn sum = 0 mới có thể dùng được để thực hiện các phép toán tử.
Again:
    cout << "Nhập a = "; 
    cin >> a; // Nhập a từ bàn phím.
    if (a > 100 && a < 200 && a % 3 == 0) // Kiểm tra a có thỏa mãn điều kiện đề bài.
    {   // Nếu a thỏa mãn đk thực hiện code trong (*)
        
        // start (*)
        for (int i = 1; i <= a; i++) {
            sum +=i; // <=> sum = sum + i
        }

        cout << "Tổng = " << sum; // in sum ra màn hình
        // end (*)
    }

    // Nếu a không thõa mãn đk thì thực hiện code trong else
    else {
        cout << "Error" << endl;
        goto Again; // Đoạn này kiểu là khi mà dòng này được chạy thì nó sẽ quay lại Again: và thực hiện lại các dòng code sau Again:
    }

    return 0;
}
