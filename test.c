#define _CRT_SECURE_NO_WARNINGS

#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("****1.play  0.exit*****\n");
	printf("***********************\n");
}
//��Ϸ���㷨ʵ��
void game()
{
	//���������ӵ�����
	char board[ROW][COL];
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	//����
	while (1)
	{
		int ret;
		//�������	
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		
		if (ret == 'Q')
		{
			printf("ƽ��\n");
		}
		if (ret != 'C')
		{
			break;
		}
		//������
		cumputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=IsWin(board, ROW, COL);
		
		if (ret == '*')
		{
			printf("���Ӯ\n");
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		if (ret=='Q')
		{
			printf("ƽ��\n");
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
		printf("��ѡ��->\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);

}
int main()
{
	test();
		return 0;
}