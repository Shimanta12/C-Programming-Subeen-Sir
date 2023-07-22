#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const char PLAYER1 = 'X';
const char PLAYER2 = 'O';

char board[3][3];

void print_board();
void reset_board();
void player1_move();
void player2_move();
int check_free_spaces();
char check_winner();
void print_winner(char);

int main()
{
    char response;
    do
    {
        char winner = ' ';
        reset_board();
        while (winner == ' ' && check_free_spaces() != 0)
        {
            print_board();

            player1_move();
            winner = check_winner();
            if (winner != ' ' || check_free_spaces() == 0)
            {
                break;
            }
            print_board();
            player2_move();
            winner = check_winner();
            if (winner != ' ' || check_free_spaces() == 0)
            {
                break;
            }
        }
        print_winner(winner);
        printf("Want to play another match? (Y/N): ");
        scanf(" %c", &response);
        response = toupper(response);
    } while (response == 'Y');

    return 0;
}

void print_board()
{
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
}
void reset_board()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void player1_move()
{
    int x, y;
    do
    {
        printf("PLAYER 1 MOVE.\n\n");
        printf("Enter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("Enter row #(1-3): ");
        scanf("%d", &y);
        y--;
        if (board[x][y] != ' ')
        {
            printf("Invalid move.\n");
        }
        else
        {
            board[x][y] = PLAYER1;
            break;
        }
    } while (board[x][y] != ' ');
}
void player2_move()
{
    if (check_free_spaces() > 0)
    {
        int x, y;
        do
        {
            printf("PLAYER 2 MOVE.\n\n");
            printf("Enter row #(1-3): ");
            scanf("%d", &x);
            x--;
            printf("Enter row #(1-3): ");
            scanf("%d", &y);
            y--;
            if (board[x][y] != ' ')
            {
                printf("Invalid move.\n");
            }
            else
            {
                board[x][y] = PLAYER2;
                break;
            }
        } while (board[x][y] != ' ');
    }
}
int check_free_spaces()
{
    int free_spaces = 9;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                free_spaces--;
            }
        }
    }
    return free_spaces;
}
char check_winner()
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }
    return ' ';
}
void print_winner(char winner)
{
    if (winner == PLAYER1)
    {
        printf("PLAYER 1 WIN!\n");
    }
    else if (winner == PLAYER2)
    {
        printf("PLAYER 2 WIN\n");
    }
    else
    {
        printf("ITS A TIE!\n");
    }
}