#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<assert.h>

#include<stdlib.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x /y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
void menu()
{
	printf("************************\n");
	printf("***1.Add     2.Sub******\n");
	printf("***3.Mul     4.Div******\n");
	printf("***5.Xor     0.exit*****\n");
	printf("************************\n");
	printf("请选择->\n");
}
//int main()
//{
//	int x=0; int y=0;
//	int (*pfArr[])(int,int) = { 0,Add,Sub,Mul,Div,Xor };
//	int input;
//	do
//	{
//		menu();
//		scanf("%d", &input);
//
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数->\n");
//			scanf("%d %d", &x, &y);
//			int ret = pfArr[input](x,y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}

void Cal(int (*p) (int, int))
{
	int x, y;
	printf("请输入两个操作数->\n");
	scanf("%d %d", &x, &y);
	printf("%d\n", p(x, y));
}
int main()
{
	int input=0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Cal(Add);
			break;
		case 2:
			Cal(Sub);
			break;
		case 3:
			Cal(Mul);
			break;
		case 4:
			Cal(Div);
			break;
		case 5:
			Cal(Xor);
			break;
		case 0:
			printf("退出\n");
		default:
			printf("输入错误\n");

		}	

	}
	while (input);
	return 0;
}