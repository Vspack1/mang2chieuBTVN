//BAI9
#include <iostream>  
using namespace std;  

int main() {  
    int n;  
    cout << "Nhap kich thuoc n (2 <= n <= 10): ";  
    cin >> n;  

    int matrix[10][10]; // Giả sử n không vượt quá 10  

    // Nhập giá trị vào ma trận theo dạng zigzag cột  
    for (int j = 0; j < n; j++) {  
        if (j % 2 == 0) { // Cột chẵn  
            for (int i = 0; i < n; i++) {  
                cout << "Nhap phan tu (" << i + 1 << ", " << j + 1 << "): ";  
                cin >> matrix[i][j];  
            }  
        } else { // Cột lẻ  
            for (int i = n - 1; i >= 0; i--) {  
                cout << "Nhap phan tu (" << i + 1 << ", " << j + 1 << "): ";  
                cin >> matrix[i][j];  
            }  
        }  
    }  

    // Xuất ma trận  
    cout << "Ma tran sau khi nhap:\n";  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cout << matrix[i][j] << "\t";  
        }  
        cout << endl;  
    }  

    return 0;  
}