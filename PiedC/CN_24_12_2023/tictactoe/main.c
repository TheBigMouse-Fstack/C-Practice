#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hàm để hiển thị bảng trò chơi
void displayBoard(char board[3][3]) {
    printf("\nBang tro choi:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Hàm để kiểm tra xem có người chiến thắng hay không
int checkWinner(char board[3][3]) {
    // Kiểm tra các hàng và cột
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return 1; // Kiểm tra hàng
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return 1; // Kiểm tra cột
    }

    // Kiểm tra đường chéo
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return 1; // Đường chéo chính
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return 1; // Đường chéo phụ

    return 0; // Không có người chiến thắng
}

// Hàm để kiểm tra xem bảng đã đầy chưa
int isBoardFull(char board[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return 0; // Bảng chưa đầy
            }
        }
    }
    return 1; // Bảng đã đầy
}

// Hàm để thực hiện lượt đi của máy
void makeComputerMove(char board[3][3]) {
    int row, col;

    // Lựa chọn ô ngẫu nhiên trên bảng
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while (board[row][col] == 'X' || board[row][col] == 'O');

    // Đánh dấu ô đã chọn
    board[row][col] = 'O';
}

// Hàm chính
int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int currentPlayer = 1; // 1 cho người chơi X, 2 cho người chơi O
    int choice, row, col;

    srand(time(NULL)); // Khởi tạo seed cho hàm rand()

    do {
        // Hiển thị bảng trò chơi
        displayBoard(board);

        // Người chơi X đánh
        if (currentPlayer == 1) {
            printf("Nguoi choi X chon o de danh (1-9): ");
            scanf("%d", &choice);
            row = (choice - 1) / 3;
            col = (choice - 1) % 3;
        }
        // Người chơi O (máy) đánh
        else {
            makeComputerMove(board);
        }

        // Kiểm tra ô đã được chọn chưa và đánh dấu ô đó
        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Ô đã được chọn. Chọn ô khác.\n");
        } else {
            if (currentPlayer == 1) {
                board[row][col] = 'X';
            }

            // Chuyển lượt chơi cho người chơi kế tiếp
            currentPlayer = 3 - currentPlayer;
        }

    } while (!checkWinner(board) && !isBoardFull(board)); // Lặp cho đến khi có người chiến thắng hoặc bảng đầy

    // Hiển thị bảng trò chơi cuối cùng và thông báo kết quả
    displayBoard(board);

    if (checkWinner(board)) {
        printf("Người chơi %d chiến thắng!\n", 3 - currentPlayer);
    } else {
        printf("Hòa!\n");
    }

    return 0;
}
