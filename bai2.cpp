//BAI2
#include <iostream>  
using namespace std;  

int main() {  
    int matrix[4][3];  
    int i = 0, j = 0;  

    // Nhập dữ liệu  
    while (i < 4) {  
        j = 0;  
        while (j < 3) {  
            cout << "Nhap phan tu (" << i+1 << ", " << j+1 << "): ";  
            cin >> matrix[i][j];  
            j++;  
        }  
        i++;  
    }  

    // Xuất mảng  
    cout << "Mang da nhap:\n";  
    for (i = 0; i < 4; i++) {  
        for (j = 0; j < 3; j++) {  
            cout << matrix[i][j] << "\t";  
        }  
        cout << endl;  
    }  
    return 0;  
}