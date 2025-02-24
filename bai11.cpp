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

//BAI11 cach 3: edit lan 2
#include <iostream>  
#include <string>  
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
    string ticketClass;  
    int row;  
    char col;  

    cout << "Nhap loai ve (thuong gia, pho thong, tiet kiem): ";  
    cin >> ticketClass;  

    // Kiểm tra loại vé và xác định hàng ghế  
    if (ticketClass == "thuong gia") {  
        cout << "Chon hang (1-2): ";  
    } else if (ticketClass == "pho thong") {  
        cout << "Chon hang (3-7): ";  
    } else if (ticketClass == "tiet kiem") {  
        cout << "Chon hang (8-13): ";  
    } else {  
        cout << "Loai ve khong hop le!\n";  
        return;  
    }  

    cin >> row;  
    cout << "Chon cot (A-F): ";  
    cin >> col;  

    // Chuyển đổi cột từ ký tự thành chỉ số  
    int colIndex = col - 'A';  
    row -= 1; // Chuyển đổi sang chỉ số mảng  

    // Kiểm tra hợp lệ  
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
        {'*', '*', '*', '*', '*', '*'}, // Hàng 1 (Thương gia)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 2 (Thương gia)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 3 (Phổ thông)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 4 (Phổ thông)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 5 (Phổ thông)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 6 (Phổ thông)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 7 (Phổ thông)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 8 (Tiết kiệm)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 9 (Tiết kiệm)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 10 (Tiết kiệm)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 11 (Tiết kiệm)  
        {'*', '*', '*', '*', '*', '*'}, // Hàng 12 (Tiết kiệm)  
        {'*', '*', '*', '*', '*', '*'}  // Hàng 13 (Tiết kiệm)  
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

//last edit

#include <iostream>
#include <iomanip>
using namespace std;

const int ROWS = 13;
const int COLS = 6;
const string COLUMN_NAMES = "ABCDEF";

// Khởi tạo sơ đồ ghế
void initializeSeats(char seats[ROWS][COLS]) {
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            seats[i][j] = '*';
        }
    }
}

// Hiển thị sơ đồ ghế
void displaySeats(const char seats[ROWS][COLS]) {
    cout << "\n  ";
    for(char c : COLUMN_NAMES) {
        cout << c << " ";
    }
    cout << "\n";

    for(int i = 0; i < ROWS; i++) {
        cout << setw(2) << i + 1 << " ";
        for(int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

// Kiểm tra hàng ghế có phù hợp với loại vé không
bool isValidRow(int row, int ticketType) {
    switch(ticketType) {
        case 1: return row >= 1 && row <= 2;    // Thương gia
        case 2: return row >= 3 && row <= 7;    // Phổ thông
        case 3: return row >= 8 && row <= 13;   // Tiết kiệm
        default: return false;
    }
}

// Đặt chỗ
bool bookSeat(char seats[ROWS][COLS], int row, char col, int ticketType) {
    if(row < 1 || row > ROWS) return false;
    
    int colIndex = COLUMN_NAMES.find(toupper(col));
    if(colIndex == string::npos) return false;
    
    if(!isValidRow(row, ticketType)) return false;
    
    if(seats[row-1][colIndex] != '*') return false;
    
    seats[row-1][colIndex] = 'x';
    return true;
}

// Hiển thị thống kê ghế trống
void displayStats(const char seats[ROWS][COLS]) {
    int business = 0, economy = 0, budget = 0;
    
    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            if(seats[i][j] == '*') {
                if(i < 2) business++;
                else if(i < 7) economy++;
                else budget++;
            }
        }
    }
    
    cout << "\nSố ghế trống:\n";
    cout << "- Thương gia: " << business << "/12\n";
    cout << "- Phổ thông: " << economy << "/30\n";
    cout << "- Tiết kiệm: " << budget << "/36\n";
}

int main() {
    char seats[ROWS][COLS];
    initializeSeats(seats);
    
    while(true) {
        cout << "\n=== HỆ THỐNG ĐẶT CHỖ MÁY BAY ===\n";
        cout << "1. Đặt chỗ\n";
        cout << "2. Hiển thị sơ đồ chỗ ngồi\n";
        cout << "3. Thoát\n";
        cout << "Chọn chức năng (1-3): ";
        
        int choice;
        cin >> choice;
        
        switch(choice) {
            case 1: {
                cout << "\nChọn loại vé:\n";
                cout << "1. Thương gia (Hàng 1-2)\n";
                cout << "2. Phổ thông (Hàng 3-7)\n";
                cout << "3. Tiết kiệm (Hàng 8-13)\n";
                cout << "Chọn (1-3): ";
                
                int ticketType;
                cin >> ticketType;
                
                if(ticketType < 1 || ticketType > 3) {
                    cout << "Loại vé không hợp lệ!\n";
                    break;
                }
                
                int row;
                char col;
                cout << "Nhập hàng (1-13): ";
                cin >> row;
                cout << "Nhập cột (A-F): ";
                cin >> col;
                
                if(bookSeat(seats, row, col, ticketType)) {
                    cout << "Đặt chỗ thành công!\n";
                } else {
                    cout << "Đặt chỗ thất bại! Vui lòng kiểm tra:\n";
                    cout << "- Hàng phải phù hợp với loại vé\n";
                    cout << "- Ghế phải còn trống\n";
                    cout << "- Cột phải từ A đến F\n";
                }
                break;
            }
            case 2: {
                displaySeats(seats);
                displayStats(seats);
                break;
            }
            case 3: {
                cout << "Cảm ơn đã sử dụng dịch vụ!\n";
                return 0;
            }
            default: {
                cout << "Lựa chọn không hợp lệ!\n";
            }
        }
    }
    
    return 0;
}

