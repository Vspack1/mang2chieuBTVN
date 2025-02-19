//BAI7
#include <iostream>  
using namespace std;  

// Hàm nhập ma trận  
void inputMatrix(int matrix[10][10], int r, int c) {  
    for (int i = 0; i < r; i++)  
        for (int j = 0; j < c; j++) {  
            cout << "Nhap phan tu (" << i + 1 << ", " << j + 1 << "): ";  
            cin >> matrix[i][j];  
        }  
}  

// Hàm xuất ma trận  
void printMatrix(int matrix[10][10], int r, int c) {  
    for (int i = 0; i < r; i++) {  
        for (int j = 0; j < c; j++) {  
            cout << matrix[i][j] << "\t";  
        }  
        cout << endl;  
    }  
}  

int main() {  
    int r, c;  
    cout << "Nhap so hang (r): ";  
    cin >> r;  
    cout << "Nhap so cot (c): ";  
    cin >> c;  

    int matrix[10][10];  
    
    inputMatrix(matrix, r, c);  
    printMatrix(matrix, r, c);  

    return 0;  
}