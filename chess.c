#include <stdio.h>

#define INVALID_LOC -1
#define N_ROWS 16
#define N_COLS 16
#define N_SQUARES 64

int get_loc(char dir, int current_loc)
{
    int diff = -100;

    switch(dir)
    {
	case 'u': diff = -16;
		  break;
	case 'd': diff = 16;
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
    int board[N_SQUARES] = { 0 };

    printf("%d",board[0]);

    int j = get_loc('u', 3);
    printf("%d\n", j);
}


