#include <stdio.h>
#include "constants.h"
#include "display.h"

int get_loc(char dir, int current_loc)
{
    int diff = -100;

    switch(dir)
    {
	case D_UP: diff = -N_COLS;
		  break;
	case D_DOWN: diff = N_COLS;
		  break;
	case D_LEFT: diff = -1;
		  break;
	case D_RIGHT: diff = 1;
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

int move(int curr_loc, int new_loc, int* board, int* state)
{
    int curr_piece = board[curr_loc];
    // Does piece being moved belong to current player?
    int curr_player = state[CURR_PLAYER_IDX];
    if ( (curr_player && (curr_piece < P2_START_IDX)) ||
	    (!curr_player && (curr_piece > P1_END_IDX)) ) {
	return INVALID_LOC;
    }

    // Check for valid move based on rank

    // Check for capture / occupied space
    
    // Clear old square and populate new square
    board[curr_loc] = EMPTY_SQUARE;
    board[new_loc] = curr_piece;

    // Adjust piece's state
    state[curr_piece] = new_loc;

    return OK;

}

int main() 
{

    printf(".-=: Chess :=-.\n");

    // Initalize board
    /*int board[N_SQUARES];
    for (int i = 0; i < N_SQUARES; i++)
    {
	board[i] = -1;
    }*/
    int board[] = { 13,  8, 11, 14, 15, 10,  9, 12, 
		     0,  1,  2,  3,  4,  5,  6,  7,
		    -1, -1, -1, -1, -1, -1, -1, -1,
		    -1, -1, -1, -1, -1, -1, -1, -1,
		    -1, -1, -1, -1, -1, -1, -1, -1,
		    -1, -1, -1, -1, -1, -1, -1, -1,
		    16, 17, 18, 19, 20, 21, 22, 23,
		    28, 24, 26, 30, 31, 27, 25, 29 };


    // Set up game state
    int state[34] = { 0 };

    int status = move(8, 16, board, state);

    printf("Move status: %d\n", status);
    // Set up test game state
    // state[10] = -1;

    printf("Printing board:");
    print_board(board, state);

}


