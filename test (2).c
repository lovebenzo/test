#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Dw()
{
	int a = 1;
	return  *(char*)&a;//读取a中的第一个字节的内容；
}

int main()
{
	int ret = Dw();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}