//ÉùÃ÷
#pragma once
#define COL 3
#define ROW 3
#include <time.h>
#include <stdlib.h>
void Initboard(char board[ROW][COL], int row, int col);
#include <stdio.h>
void Displayboard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void cumputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);