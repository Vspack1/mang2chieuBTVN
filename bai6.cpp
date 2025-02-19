//BAI6
#include <iostream>  
using namespace std;  

int main() {  
    int r, c;  
    cout << "Nhap so hang (r): ";  
    cin >> r;  
    cout << "Nhap so cot (c): ";  
    cin >> c;  

    int matrix1[10][10], matrix2[10][10], sum[10][10];  

    // Nhập ma trận 1  
    cout << "Nhap ma tran 1:\n";  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cin >> matrix1[i][j];  
        }  
    }  

    // Nhập ma trận 2  
    cout << "Nhap ma tran 2:\n";  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cin >> matrix2[i][j];  
        }  
    }  

    // Tính tổng  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            sum[i][j] = matrix1[i][j] + matrix2[i][j];  
        }  
    }  

    // Xuất tổng  
    cout << "Tong hai ma tran:\n";  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cout << sum[i][j] << "\t";  
        }  
        cout << endl;  
    }  

    return 0;  
}