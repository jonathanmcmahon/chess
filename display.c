#include <stdio.h>
#include "constants.h"

void print_board(int *board)
{
    printf("\n");
    for (int i = 0; i < N_SQUARES; i++)
    {
	if (!(i % N_COLS))
	{
	    if (i) {
		printf("|\n");
	    }
	    for (int j = 0; j < N_COLS; j++)
	    {
		printf("---");
	    }
	    printf("-\n");
	}
	printf("|  ");
    }
    printf("|\n");
    for (int i = 0; i < N_COLS; i++)
    {
	printf("---");
    }
    printf("-\n");
    
}
