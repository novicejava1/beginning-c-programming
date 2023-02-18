#include <stdio.h>

int main() {
    
    enum stateReg {Win, Loose};

    enum stateReg currentState;
    
    int dice = 6;

    if (dice == 6)
    {
        currentState = Win;
    }
    else
    {
        currentState = Loose;
    }

    if (currentState == Win)
    {
        printf("You won the game\n");
    }
    else
    {
        printf("You Loose the game\n");
    }


    return 0;
}

