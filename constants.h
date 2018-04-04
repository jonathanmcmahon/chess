#ifndef CHESS_CONST_
#define CHESS_CONST_

#define INVALID_LOC -1
#define N_ROWS 8
#define N_COLS 8
#define N_SQUARES 64


#define K 6
#define Q 5
#define R 4
#define B 3
#define N 2
#define P 1

#define P1_START_IDX 0
#define P1_END_IDX 15
#define P2_START_IDX 16
#define P2_END_IDX 31
#define CURR_PLAYER_IDX 32
#define MOVES_SINCE_CAPTURE_IDX 33


static const char RANK_SYMBOL[] = "ppppppppNNBBRRQKppppppppNNBBRRQK";
#define EMPTY_SQUARE -1

// Color codes
#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"


#endif
