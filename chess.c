#include <stdio.h>
#include "constants.h"
#include "display.h"

int get_loc(char dir, int current_loc)
{
    int diff = -100;

    switch(dir)
    {
	case 'u': diff = -N_COLS;
		  break;
	case 'd': diff = N_COLS;
		  break;
	case 'l': diff = -1;
		  break;
	case 'r': diff = 1;
		  break;
    }

    int new_loc = current_loc + diff;

    if (new_loc < 0 || new_loc > N_SQUARES)
    {
	return INVALID_LOC;
    }
    else
    {
	return new_loc;
    }

}

int main() 
{

    printf("Chess\n");

    // Initalize board
    int board[N_SQUARES];
    for (int i = 0; i < N_SQUARES; i++)
    {
	board[i] = -1;
    }

    // Set up test game state
    int state[34] = { 0 };
    state[10] = -1;


    printf("%d",board[0]);

    int j = get_loc('u', 3);
    printf("%d\n", j);

    printf("Printing board:");
    print_board(board, state);

}


