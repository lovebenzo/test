#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Dw()
{
	int a = 1;
	return  *(char*)&a;//��ȡa�еĵ�һ���ֽڵ����ݣ�
}

int main()
{
	int ret = Dw();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}