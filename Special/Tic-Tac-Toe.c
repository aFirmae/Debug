#include <stdio.h>

#define ROWS 3
#define COLS 3

// Function to print the board
void print_board(char board[ROWS][COLS]) {
    printf("\n");
    printf("\t\t  %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("\t\t ---|---|---\n");
    printf("\t\t  %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("\t\t ---|---|---\n");
    printf("\t\t  %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
}

// Function to check if the board is full
int board_full(char board[ROWS][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            if (board[i][j] == ' ') {
                return 0;
            }
        }
    }
    return 1;
}

// Function to check if there is a winner
int check_winner(char board[ROWS][COLS], char player) {
    int i, j;
    // Check rows
    for (i = 0; i < ROWS; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return 1;
        }
    }
    // Check columns
    for (j = 0; j < COLS; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return 1;
        }
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return 1;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return 1;
    }
    return 0;
}

int main() {
    char board[ROWS][COLS];
    int i, j;
    char player1 = 'X';
    char player2 = 'O';
    char current_player = player1;
    int row, col;
    int winner = 0;
    // Initialize board
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            board[i][j] = ' ';
        }
    }
    // Game loop
    while (!winner && !board_full(board)) {
        // Print board
        print_board(board);

        // Get player move
        printf("Player %c's turn. Enter row (1-3) and column (1-3) separated by a space: ", current_player);
        scanf("%d %d", &row, &col);
        row--; // Adjust for 0-based indexing
        col--;
        // Check if the move is valid
        if (row < 0 || row >= ROWS || col < 0 || col >= COLS || board[row][col] != ' ') {
            printf("Invalid move! Please try again.\n");
            continue;
        }
        // Update board with player move
        board[row][col] = current_player;
        // Check if there is a winner
        if (check_winner(board, current_player)) {
            winner = 1;
        }
        // Switch to the other player
        if (current_player == player1) {
            current_player = player2;
        } else {
            current_player = player1;
        }
    }
    // Print final board
    print_board(board);
    // Print winner or draw message
if (winner) {
    if (current_player == player1) {
        printf("Player %c wins!\n", player2);
    } else {
        printf("Player %c wins!\n", player1);
    }
} else {
    printf("It's a draw!\n");
}
}

