//BAI4
#include <iostream>  
using namespace std;  

int main() {  
    int r, c;  
    cout << "Nhap so hang (r): ";  
    cin >> r;  
    cout << "Nhap so cot (c): ";  
    cin >> c;  

    int matrix[5][5]; // Giả sử tối đa 5x5  
    int sumRow[5] = {0}; // Tương ứng với các hàng  
    int sumCol[5] = {0}; // Tương ứng với các cột  

    // Nhập dữ liệu  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cout << "Nhap phan tu (" << i+1 << ", " << j+1 << "): ";  
            cin >> matrix[i][j];  
            sumRow[i] += matrix[i][j]; // Tính tổng hàng  
            sumCol[j] += matrix[i][j]; // Tính tổng cột  
        }  
    }  

    // Xuất kết quả  
    cout << "Tong cac phan tu theo hang:\n";  
    for (int i = 0; i < r; i++) {  
        cout << "Hang " << i + 1 << ": " << sumRow[i] << endl;  
    }  

    cout << "Tong cac phan tu theo cot:\n";  
    for (int j = 0; j < c; j++) {  
        cout << "Cot " << j + 1 << ": " << sumCol[j] << endl;  
    }  

    return 0;  
}