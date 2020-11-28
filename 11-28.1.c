#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//void print1(int(*p)[4], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ",*(*(p+i)+j) );
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}

void print1(int(*p)[4], int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p + i))[j]);
		}
		printf("\n");
	}
}
void print2(int arr[3][4], int x, int y)
{
	int i;
	for (i = 0; i < x; i++)
	{
		int j;
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
	print1(arr, 3, 4);
	print2(arr, 3, 4);
	return 0;
}





//int main()
//{
//	char a[] = { 1,2,3,4,5 };
//	char b[] = { 2,3,4,5,6 };
//	char c[] = { 3,4,5,6,7 };
//	char* d[] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", *(d[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int flag = 1;
//	double d = 1;
//	int i;
//	double sum = 0;
//	for (i=1;i<n+1;i++)
//	{
//		sum += 1.0*flag * i / d * 1.0;
//		flag *= -1;
//		d += 2;
//	}
//	printf("%0.3f", sum);
//	return 0;
//}

//bug
//int main()
//{
//	int n; double ret=0; 
//	scanf("%d", &n);
//	int i; double sum = 0;
//	if (n == 1)
//	{
//		printf("1");
//	}
//	if (n > 1)
//	{
//		for (i = 0; i < n; i++)
//		{
//			
//			ret = i + 1.0 / i + 2;
//			if (i > 0)
//			{
//				ret *= -1;
//			}
//			sum += ret;
//			i++;
//	
//		}
//	}
//	printf("%0.3f", sum+ 0.5);
//	return 0;
//}


//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int i = 0;
//	double sum = 0;
//	int c=n - m;
//	for (i = 0; i <=c; i++)
//	{
//		double ret = pow(m, 2) + 1.0 / m;
//		sum += ret;
//		m++;
//	}
//	printf("sum = %0.6f", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	double cost;
//	if (n < 0)
//	{
//		printf("Invalid Value!");
//	}
//	if (n <= 50&&n>0)
//	{
//		cost = 0.53 * n;
//		printf("cost = %.2f", cost);
//	}
//	if (n > 50)
//	{
//		cost = 50 * 0.53 + (n - 50) * 0.58;
//		printf("cost = %.2f", cost);
//	}
//	
//	return 0;
//}