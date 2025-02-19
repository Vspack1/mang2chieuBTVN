//BAI5
#include <iostream>  
using namespace std;  

int main() {  
    int n;  
    cout << "Nhap cap cua ma tran: ";  
    cin >> n;  

    int matrix[10][10]; // Giả sử tối đa 10x10  

    // Nhập dữ liệu  
    cout << "Nhap ma tran:\n";  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cin >> matrix[i][j];  
        }  
    }  

    // Tính tổng đường chéo chính  
    int sumMain = 0, sumSecondary = 0;  
    for (int i = 0; i < n; i++) {  
        sumMain += matrix[i][i]; // Đường chéo chính  
        sumSecondary += matrix[i][n-i-1]; // Đường chéo phụ  
    }  

    cout << "Tong duong cheo chinh: " << sumMain << endl;  
    cout << "Tong duong cheo phu: " << sumSecondary << endl;  

    return 0;  
}