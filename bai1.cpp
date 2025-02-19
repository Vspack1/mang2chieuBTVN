//BAI1
#include <iostream>  
using namespace std;  

int main() {  
    int matrix[3][4];  

    // Nhập dữ liệu cho mảng  
    cout << "Nhap cac gia tri cho mang 3x4:\n";  
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 4; j++) {  
            cin >> matrix[i][j];  
        }  
    }  

    // Xuất mảng  
    cout << "Mang da nhap:\n";  
    for (int i = 0; i < 3; i++) {  
        for (int j = 0; j < 4; j++) {  
            cout << matrix[i][j] << "\t";  
        }  
        cout << endl;  
    }  
    return 0;  
}