//BAI3
#include <iostream>  
#include <limits>  
using namespace std;  

int main() {  
    int r, c;  
    cout << "Nhap so hang (r): ";  
    cin >> r;  
    cout << "Nhap so cot (c): ";  
    cin >> c;  

    int matrix[10][15]; // Giả sử tối đa 10x15  
    int sum = 0;  
    int minVal = numeric_limits<int>::max();  
    int maxVal = numeric_limits<int>::min();  

    // Nhập dữ liệu  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cout << "Nhap phan tu (" << i+1 << ", " << j+1 << "): ";  
            cin >> matrix[i][j];  
            sum += matrix[i][j];  
            if (matrix[i][j] < minVal) minVal = matrix[i][j];  
            if (matrix[i][j] > maxVal) maxVal = matrix[i][j];  
        }  
    }  

    cout << "Tong cac gia tri: " << sum << endl;  
    cout << "Gia tri nho nhat: " << minVal << endl;  
    cout << "Gia tri lon nhat: " << maxVal << endl;  

    return 0;  
}