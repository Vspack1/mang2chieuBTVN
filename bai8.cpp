//BAI8
#include <iostream>  
#include <cstdlib>  
#include <ctime>  
using namespace std;  

void generateRandomMatrix(int matrix[10][10], int n) {  
    for (int i = 0; i < n; i++)  
        for (int j = 0; j < n; j++)  
            matrix[i][j] = rand() % 100; // Giá trị ngẫu nhiên từ 0 đến 99  
}  

int main() {  
    srand(time(0)); // Khởi tạo seed  
    int n;  
    cout << "Nhap cap ma tran (2 <= n <= 10): ";  
    cin >> n;  

    int matrix[10][10];   

    generateRandomMatrix(matrix, n);  
    
    // Xuất ma trận  
    cout << "Ma tran ngau nhien:\n";  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cout << matrix[i][j] << "\t";  
        }  
        cout << endl;  
    }  

    return 0;  
}