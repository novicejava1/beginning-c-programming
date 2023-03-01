/* Example demonstration of two dimensional array pointer address */
#include <stdio.h>

int main(void)
{
    char board[3][3] = {
        {'1','2','3'},
        {'4','5','6'},
        {'7','8','9'}
    };

    printf("Address of board : %p\n", board);
    printf("Address of board[0] : %p\n", board[0]);
    printf("Address of board[0][0] : %p\n", &board[0][0]);
    printf("Value of board[0][0] : %c\n", board[0][0]);

    return 0;

}