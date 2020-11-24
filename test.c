#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("****1.play  0.exit*****\n");
	printf("***********************\n");
}
//游戏的算法实现
void game()
{
	//数组存放走子的数据
	char board[ROW][COL];
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	//下棋
	while (1)
	{
		int ret;
		//玩家先走	
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断玩家是否赢
		ret=IsWin(board, ROW, COL);
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		
		if (ret == 'Q')
		{
			printf("平局\n");
		}
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		cumputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断电脑是否赢
		ret=IsWin(board, ROW, COL);
		
		if (ret == '*')
		{
			printf("玩家赢\n");
		}
		else if (ret == '#')
		{
			printf("电脑赢\n");
		}
		if (ret=='Q')
		{
			printf("平局\n");
		}
		if (ret != 'C')
		{
			break;
		}
	}


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);

}
int main()
{
	test();
		return 0;
}