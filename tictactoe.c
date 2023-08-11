//I MUST USE POINTER LMAO
#include <stdio.h>
#include <ctype.h>
//Tictactoe

int process(int x, int a, char arr[3][3]);
void printBoard(char table[3][3]);
void choosePosition(int num, char f, char arr[3][3]);
int checkWin(char arr[3][3], char player);

int main() {
    char table[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    char playerX = 'X';
    char playerO = 'O';

    int pick, x;
    printf("Which player do you want to get the first pick? (Player 1: 1, Player 2: 2): ");
    scanf("%d", &pick);
    if(pick == 1 || pick == 2){
        while (1) {
        if (pick == 1) {
            printf("Player 1 (X): Choose the number: ");
            scanf("%d", &x);
            process(x, playerX, table);
            pick = 2;
        } else if (pick == 2) {
            printf("Player 2 (O): Choose the number: ");
            scanf("%d", &x);
            process(x, playerO, table);
            pick = 1;
        }

        // Print the updated board
        printBoard(table);

        // Check if a player has won
        if (checkWin(table, playerX)) {
            printf("Player 1 (X) wins!\n");
            break;
        } else if (checkWin(table, playerO)) {
            printf("Player 2 (O) wins!\n");
            break;
        }
    }
    }
    else{
        printf("Invalid");
    }


    return 0;
}

//process for change a[i][j] from numtext to X or O
int process(int x, int a, char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if ((x < 0 && x > 9) && (arr[i][j] == 'X' && arr[i][j] == 'O')) {
                printf("Invalid position\n");
            } else {
                choosePosition(x, a, arr);
            }
        }
    }
}

//process to print board after input position
void printBoard(char table[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", table[i][j]);
        }
        printf("\n");
    }
}

//chooseposition for X or O
void choosePosition(int num, char Player, char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == num + '0') {
                arr[i][j] = Player;
                return;
            }
        }
    }
}

//Checkwin
int checkWin(char arr[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if ((arr[i][0] == player && arr[i][1] == player && arr[i][2] == player) ||
            (arr[0][i] == player && arr[1][i] == player && arr[2][i] == player)) {
            return 1; // Win
        }
    }
    if ((arr[0][0] == player && arr[1][1] == player && arr[2][2] == player) ||
        (arr[0][2] == player && arr[1][1] == player && arr[2][0] == player)) {
        return 1; // Win
    }
    return 0; // No win
}
