//BAI11
#include <iostream>  
#include <iomanip>  
using namespace std;  

#define ROWS 13  
#define COLS 6  

void displaySeats(char seats[ROWS][COLS]) {  
    cout << "Hang\tA\tB\tC\tD\tE\tF\n";  
    for (int i = 0; i < ROWS; i++) {  
        cout << "Hang " << i + 1 << "\t";  
        for (int j = 0; j < COLS; j++) {  
            cout << seats[i][j] << "\t";  
        }  
        cout << endl;  
    }  
}  

bool bookSeat(char seats[ROWS][COLS], int row, int col) {  
    if (seats[row][col] == '*') {  
        seats[row][col] = 'x'; // Đặt chỗ  
        return true;  
    }  
    return false; // Chỗ đã được đặt  
}  

int main() {  
    char seats[ROWS][COLS];  

    // Khởi tạo chỗ ngồi  
    for (int i = 0; i < ROWS; i++) {  
        for (int j = 0; j < COLS; j++) {  
            seats[i][j] = '*'; // Chỗ trống  
        }  
    }  

    int row, col;  
    char type;  
    
    while (true) {  
        displaySeats(seats);  
        cout << "Chon loai ve (t: thuong gia, p: pho thong, k: tiet kiem): ";  
        cin >> type;  

        if (type == 't' || type == 'p' || type == 'k') {  
            cout << "Nhap hang (1-13): ";  
            cin >> row;  
            cout << "Nhap cot (A-F, 1-6): ";  
            char c;  
            cin >> c;  
            col = c - 'A'; // Chuyển đổi ký tự cột thành chỉ số  

            // Kiểm tra hàng và cột hợp lệ  
            if (row < 1 || row > 13 || col < 0 || col > 5) {  
                cout << "Vi tri khong hop le. Vui long nhap lai.\n";  
                continue;  
            }  
            row--; // Chuyển đổi sang chỉ số (0-12)  

            if (bookSeat(seats, row, col)) {  
                cout << "Dat cho thanh cong!\n";  
            } else {  
                cout << "Cho nay da duoc dat. Vui long chon cho khac.\n";  
            }  
        } else {  
            cout << "Thoat chuong trinh.\n";  
            break;  
        }  
    }  

    return 0;  
}