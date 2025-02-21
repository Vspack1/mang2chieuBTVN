//BAI11 cach 1: quen menu
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

//BAI11 cach 2: co menu
#include <iostream>  
using namespace std;  

const int ROWS = 13; // Số hàng  
const int COLS = 6;  // Số cột  

// Hàm để hiển thị trạng thái chỗ ngồi  
void displaySeats(char seats[ROWS][COLS]) {  
    cout << "     A B C D E F\n"; // Cột ghế  
    for (int i = 0; i < ROWS; i++) {  
        cout << "Hang " << (i + 1) << ": "; // Hàng ghế  
        for (int j = 0; j < COLS; j++) {  
            cout << seats[i][j] << " "; // In trạng thái ghế  
        }  
        cout << endl;  
    }  
}  

// Hàm để đặt chỗ ngồi  
void bookSeat(char seats[ROWS][COLS]) {  
    int row;  
    char col;  
    cout << "Nhap hang (1-13) va cot (A-F) de dat: ";  
    cin >> row >> col;  

    // Chuyển đổi cột từ ký tự thành chỉ số  
    int colIndex = col - 'A';  
    row -= 1; // Chuyển đổi sang chỉ số mảng  

    if (row < 0 || row >= ROWS || colIndex < 0 || colIndex >= COLS) {  
        cout << "Chon khong hop le. Vui long thu lai.\n";  
    } else if (seats[row][colIndex] == 'x') {  
        cout << "Cho da dat. Vui long chon cho khac.\n";  
    } else {  
        seats[row][colIndex] = 'x'; // Đặt chỗ đã chọn  
        cout << "Dat cho thanh cong!\n";  
    }  
}  

// Hàm chính  
int main() {  
    char seats[ROWS][COLS] = {   
        {'*', '*', '*', '*', '*', '*'}, // Hàng 1  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 2  
        {'*', 'x', '*', 'x', '*', '*'}, // Hàng 3  
        {'x', '*', 'x', '*', 'x', '*'}, // Hàng 4  
        {'*', 'x', '*', 'x', '*', '*'}, // Hàng 5  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 6  
        {'*', 'x', '*', '*', 'x', '*'}, // Hàng 7  
        {'*', 'x', '*', '*', '*', 'x'}, // Hàng 8  
        {'*', '*', 'x', '*', '*', '*'}, // Hàng 9  
        {'*', '*', 'x', '*', 'x', '*'}, // Hàng 10  
        {'*', 'x', '*', '*', '*', '*'}, // Hàng 11  
        {'*', '*', 'x', '*', 'x', '*'}, // Hàng 12  
        {'*', '*', '*', '*', '*', '*'}  // Hàng 13  
    };  

    int choice;  
    do {  
        cout << "\n1. Hien thi cho ngoi\n";  
        cout << "2. Dat cho\n";  
        cout << "3. Thoat\n";  
        cout << "Chon: ";  
        cin >> choice;  

        switch (choice) {  
            case 1:  
                displaySeats(seats);  
                break;  
            case 2:  
                bookSeat(seats);  
                break;  
            case 3:  
                cout << "Thoat chuong trinh.\n";  
                break;  
            default:  
                cout << "Lua chon khong hop le. Vui long thu lai.\n";  
        }  
    } while (choice != 3);  

    return 0;  
}
