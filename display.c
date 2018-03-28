#include <stdio.h>
#include "constants.h"

void print_board(int *board)
{
    printf("\n");
    
    // Top of board
    printf("╔══╦══╦══╦══╦══╦══╦══╦══╗\n");

    for (int i = 0; i < N_SQUARES; i++)
    {
	if (!(i % N_COLS)) // Go to next row
	{
	    if (i) {
		printf("║\n");
		printf("╠══╬══╬══╬══╬══╬══╬══╬══╣\n");
	    }
	}
	// Print chess piece symbol
	char piece = RANK_SYMBOL[board[i]];
	printf("║"); 
	putchar(piece);
	putchar(' ');
    }
    // Bottom of board
    printf("║\n");
    printf("╚══╩══╩══╩══╩══╩══╩══╩══╝\n");
    
}
