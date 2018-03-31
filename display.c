#include <stdio.h>
#include "constants.h"


void print_state_line(int curr_square, int *state)
{
    int curr_line = curr_square / 8;
    printf(" ");
    switch (curr_line)
    {
	case 1: ;
		int curr_player = state[CURR_PLAYER_IDX];
		if (curr_player == 0)
		{
		    printf("Player 1's turn");
		} 
		else 
		{
		    printf("Player 2's turn");
		}
		break;
	case 3: printf("P1 lost: ");
		for (int j = P1_START_IDX; j <= P1_END_IDX; j++) {
		    if (state[j] == -1) 
		    {
			printf("%c ", RANK_SYMBOL[j]);
		    }
		}
		break;
	case 5: printf("P2 lost: ");
		for (int j = P2_START_IDX; j <= P2_END_IDX; j++) {
		    if (state[j] == -1) 
		    {
			printf("%c ", RANK_SYMBOL[j]);
		    }
		}
		break;
	default: break;
    }
}

void print_board(int *board, int *state)
{
    printf("\n");
    
    // Top of board
    printf("  a  b  c  d  e  f  g  h\n");
    printf(" ╔══╦══╦══╦══╦══╦══╦══╦══╗\n8");

    for (int i = 0; i < N_SQUARES; i++)
    {
	if (!(i % N_COLS)) // Go to next row
	{
	    if (i) {
		printf("║\n");
    	    	printf(" ╠══╬══╬══╬══╬══╬══╬══╬══╣");
		print_state_line(i, state);
		printf("\n");
		printf("%d", (N_SQUARES - i) / 8);
	    }
	}
	// Print chess piece symbol
	char piece = ' ';
	if (board[i] != EMPTY_SQUARE) {
	    piece = RANK_SYMBOL[board[i]];
	}
	printf("║"); 
	putchar(piece);
	putchar(' ');
    }
    // Bottom of board
    printf("║\n");
    printf(" ╚══╩══╩══╩══╩══╩══╩══╩══╝\n");
    
}
