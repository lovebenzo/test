#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//void My_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}
//int main()
//{
//	char arr1[] = "########";
//	char arr2[] = "bit";
//	My_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}



//void My_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	
//}

//������⣨���׷������⣩
//void My_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//
//}

//�ܼ�ʱ��������
//#include<assert.h>
//void My_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//
//}

//��С���������
#include<assert.h>
char* My_strcpy(char* dest,const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	{
		while (*dest++ = *src++)
		{
			;
		}
	}
	return ret;
}
int main()
{
	char arr1[] = "########";
	char arr2[] = "bit";
	printf("%s", My_strcpy(arr1, arr2));
	return 0;
}