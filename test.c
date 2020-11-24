#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<time.h>



//typedef struct
//{
//    int x, y;
//    char ch;
//}STU;
//STU st[100];
//
//
//void gotoxy(int x, int y)
//{
//    HANDLE hout;
//    COORD pos;
//    pos.X = x;
//    pos.Y = y;
//
//    hout = GetStdHandle(STD_OUTPUT_HANDLE);
//    SetConsoleCursorPosition(hout, pos);
//}
//
//
//void show_cursor(int hide)
//{
//    CONSOLE_CURSOR_INFO cciCursor;
//    HANDLE hout;
//
//    hout = GetStdHandle(STD_OUTPUT_HANDLE);
//    if (GetConsoleCursorInfo(hout, &cciCursor))
//    {
//        cciCursor.bVisible = hide;
//        SetConsoleCursorInfo(hout, &cciCursor);
//    }
//}
//
//
//void set_color(int color)
//{
//
//    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
//
//main()
//{
//    int i, j;
//    show_cursor(0);
//    srand(time(NULL));
//   
//    for (i = 0; i < 100; i++)
//    {
//        st[i].x = rand() % 80;
//        st[i].y = rand() % 20;
//        st[i].ch = rand() % (49 - 47) + 48;
//    }
//    while (1)
//    {
//        for (i = 0; i < 100; i++)
//        {
//            gotoxy(st[i].x, st[i].y);
//            set_color(0x2);
//            putchar(st[i].ch);
//            gotoxy(st[i].x, st[i].y - 5);
//            putchar(' ');
//            st[i].y++;
//            st[i].ch = rand() % (49 - 47) + 48;
//            if (st[i].y - 5 >= 18)
//            {
//                gotoxy(st[i].x, st[i].y - 1);
//                putchar(' ');
//                gotoxy(st[i].x, st[i].y - 2);
//                putchar(' ');
//                gotoxy(st[i].x, st[i].y - 3);
//                putchar(' ');
//                gotoxy(st[i].x, st[i].y - 4);
//                putchar(' ');
//                gotoxy(st[i].x, st[i].y - 4);
//                putchar(' ');
//            }
//            if (st[i].y > 23)
//            {
//                st[i].x = rand() % 80;
//                st[i].y = rand() % 20;
//            }
//            gotoxy(st[i].x, st[i].y);
//            set_color(0xA);
//            putchar(st[i].ch);
//        }
//        Sleep(120);
//    }
//}



 /*struct My_boy
{
    char name[20];
    short age;
    char sex[5];
};
 void Print(struct My_boy* ps)
 {
     printf("%s\n", ps->name);
     printf("%d\n", ps->age);
     printf("%s\n", ps->sex);
 }
int main()
{
    struct My_boy boy = {"BENZO",25,"male"};
    Print(&boy);
    return 0;
}*/




//void Print(int* arr,int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", (*arr + i));
//    }
//}
//int main()
//{
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    Print(arr,sz);
//    return 0;
//}





//int main()
//{
//    int a = 10, b = 20;
//    printf("%d %d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("%d %d\n", a, b);
//    return 0;
//}

//打印二进制中的不同位
//void Print(int n)
//{
//    int i; 
//    printf("奇数位:\n");
//    for (i = 30; i >= 0; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//    printf("偶数位:\n");
//    for (i = 31; i >= 1; i -= 2)
//    {
//        printf("%d ", (n >> i) & 1);
//    }
//    printf("\n");
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    Print(n);
//    return 0;
//}


//三种方法求二进制中1的个数
//int count(unsigned int n)
//{
//    int count=0;
//    while (n)
//    {
//        if (n%2==1)
//        {
//            count++;
//        }
//        n /= 2;
//    }
//    return count;
//}
//int count( int n)
//{
//    int count = 0;
//    int i;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n >> i) & 1 == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int count(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & n - 1;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int num=count(n);
//    printf("%d\n", num);
//    return 0;
//
//}
//求二进制中两个数不同位的个数
//int count(int n,int m)
//{
//    int count = 0;
//    n = m ^ n;
//    while (n)
//    {
//        n = n & n - 1;
//        count++;
//    }
//    return count;
//}
//int main()
//{
//    int n,m;
//    scanf("%d %d", &n,&m);
//    int num = count(n,m);
//    printf("%d\n", num);
//    return 0;
//
//}


//#define pi 3.1415926
//void menue()
//{
//    printf("1-Ball\n");
//    printf("2-Cylinder\n");
//    printf("3-Cone\n");
//    printf("other-Exit\n");
//    printf("Please enter your command:\n");
//}
//double ball();
//double Cylinder();
//double Cone();
//int main()
//{
//
//    while (1)
//    {
//        menue();
//        int n;
//        scanf("%d", &n);
//        switch (n)
//        {
//        case 1:
//            printf("Please enter the radius:\n");
//            double V1 = ball();
//            printf("%0.2f\n", V1);
//            break;
//        case 2:
//            printf("Please enter the radius and the height:\n");
//            double V2 = Cylinder();
//            printf("%0.2f\n", V2);
//            break;
//        case 3:
//            printf("Please enter the radius and the height:\n");
//            double V3 = Cone();
//            printf("%0.2f\n", V3);
//        default:
//            return 0;
//        }
//    }
//    return 0;
//}
//double ball()
//{
//    double r;
//    scanf("%lf", &r);
//    double V = 3.0 / 4 * pi * pow(r, 3);
//    return V;
//}
//double Cylinder()
//{
//    double r, h;
//    scanf("%lf %lf", &r, &h);
//    double V = 1.0 * pi * pow(r, 2) * h;
//    return V;
//}
//double Cone()
//{
//    double r, h;
//    scanf("%lf %lf", &r, &h);
//    double V = 1.0 / 3 * pi * pow(r, 2) * h;
//}











//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i;
//    int arr[10];
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    for (i = 0; i < n; i++)
//    {
//        int j;
//        for (j = 2; j <= arr[i]/2; j++)
//        {
//            if (arr[i] % j == 0)
//            {
//                printf("No\n");
//                break;
//            }
//        }
//        if (j > arr[i]/2)
//        {
//            printf("Yes\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//    int n, k, q = 0, sum = 0;
//    scanf("%d %d", &n, &k);
//    int i;
//    for (i = n; i >= 2; i--)
//    {
//        int j; int isprime = 1;
//        for (j = 2; j <= i-1; j++)
//        {
//            if (i % j == 0)
//            {
//                isprime = 0;
//                break;
//            }
//        }
//        if (isprime == 1)
//        {
//            sum += i;
//            if (q == 0)
//            
//                printf("%d", i);
//            
//            else
//            
//                printf("+%d", i);
//            
//            q++;
//        }
//        if (q >= k || i == 2)
//        {
//            printf("=%d", sum);
//            break;
//        }
//    }
//    return 0;
//}




//int main()
//{
//    int n, k,q=0,sum=0;
//    scanf("%d %d", &n, &k);
//    int i = n;
//    for (i; i >= 2; i--)
//    {
//        int j; int isprime=1;
//        for (j = 2; j < i-1; j++)
//        {
//            if (i % j == 0)
//            {
//                isprime = 0;
//                break;
//            } 
//        }
//        if (isprime == 1)
//        {
//            sum += i;
//            if (q == 0)
//                printf("%d", i);
//            else
//                printf("+%d", i);
//            q++;
//        }
//        if (q >= k || i == 2)
//        {
//            printf("=%d", sum);
//            break;
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int n, k, i, j, q = 0, sum = 0;
//    scanf("%d %d", &n, &k);
//    i = n;
//    for (i; i >= 2; i--)
//    {
//        int isprime = 1;
//        for (j = 2; j < i - 1; j++)
//        {
//            if (i % j == 0) { isprime = 0; break; }
//        }
//        if (isprime == 1)
//        {
//            sum += i;
//            if (q == 0)printf("%d", i);
//            else printf("+%d", i);
//            q++;
//        }
//        if (q >= k || i == 2)
//        {
//            printf("=%d", sum);
//            break;
//        }
//    }
//    return 0;
//}

//long fac(int n)
//{
//    long f;
//    if (n == 0)
//        f = 1;
//    else f = n * fac(n - 1);
//    return(f);
//}
//int main()
//{
//    int n;
//    long y;
//    scanf("%d", &n);
//    y = fac(n);
//    printf("%d!=%ld", n, y);
//
//    return 0;
//}


//double fact(int m)
//{
//    int i; double c=1;
//    for (i = 1; i <= m; i++)
//    {
//        c *= i;
//    }
//    return c;
//}
//int main()
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//    double C = 1.0*fact(n) / (fact(m) * fact(n-m));
// 
//    printf("result = %0.0f", C);
//    return 0;
//}

//void Init(int a[],int sz)
//{
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        a[i] = 0;
//    }
//}
//void Print(int a[], int sz)
//{
//    int i;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", a[i]);
//    }
//    printf("\n");
//}
//void Reverse(int a[], int sz)
//{
//    int left = 0;
//    int right = sz - 1;
//    int tmp;
//    while (left < right)
//    {
//        tmp = a[left];
//        a[left] = a[right];
//        a[right] = tmp;
//        left += 1;
//        right-=1;
//    }
//}
//int main()
//{
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    Reverse(arr, sz);
//    Print(arr, sz);
//    Init(arr, sz);
//    Print(arr, sz);
//    return 0;
//}



//int main()
//{
//    int a[] = { 1,2,3,4,5 };
//    int b[] = { 6,7,8,9,10 };
//    int i; int tmp=0;
//    int sz = sizeof(a) / sizeof(a[0]);
//    for (i = 0; i < sz; i++)
//    {
//        tmp=a[i];
//        a[i] = b[i];
//        b[i] = tmp;
//    }
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d  ", a[i]);
//    }
//    printf("\n");
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d  ", b[i]);
//    }
//    return 0;
//}







//int main()
//{
//    int n;
//    scanf("%d", &n);
//    double sum=0;
//    int i;
//    for (i = 1; i <= n; i++)
//    {
//        sum += 1.0 / i;
//    }
//    printf("%0.6f", sum);
//    return 0;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i = 1, m;
//    int x = 1;
//    double sum = 0, j = 0;
//    for (m = 1; m <= n; m++)
//    {
//        j = 1.0 *x/ i;
//        sum += j;
//        x *= -1;
//        i += 3;
//    }
//    printf("sum = %0.3f", sum);
//    return 0;
//}



//int main()
//{
//    int l, u;
//    scanf("%d %d", &l, &u);
//    if (l <= u && u <= 100)
//    {
//        double c = 0;
//        printf("fahr celsius\n");
//        int i = 0;
//        for (l; l < u; l += 2)
//        {
//            c = 5.0 * (l - 32) / 9;
//            printf("%d   %6.1f\n", l ,c);
//        }
//    }
//    else
//    {
//        printf("Invalid.");
//    }
//
//    return 0;
//}


//int main()
//{
//    int f;
//    scanf("%d", & f);
//    int c;
//    c = 5 * (f - 32) / 9;
//    printf("Celsius = %d", c);
//    return 0;
//}

//int main()
//{
//    double height= 0.5 * 10 * 3 * 3;
//
//     
//    printf("height = %0.2f\n", height);
//
//    return 0;
//}

//不用strlen求字符串数组长度
//int Mystrlen(char* str)//数组传参传的是首元素地址
//{
//    char* start = str;
//    char* end = str;
//    while (*end != '\0')
//    {
//        end++;
//    }
//    return end - start;
//}
//int main()
//{
//    char arr[] = "bit";
//    int len = Mystrlen(arr);
//    printf("%d", len);
//    return 0;
//}











//int Mystrlen(char* str)
//{
//    char* start = str;
//    char* end = str;
//    while (*end!='\0')
//    {
//        end++;
//    }
//    return end - start;
//}
//int main()
//{
//    char arr[] = "bit";
//    int len = Mystrlen(arr);
//    printf("%d", len);
//    return 0;
//}



//{
//    printf("“Programming in C is fun!”");
//    return 0;
//}
//int main()
//{
//    int i, j;
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 4 - i; j++)
//        {
//            printf("* ");
//        }
//
//        for (j = 0; j < i; j++)
//        {
//            printf(" ");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//int main()
//{
//    int i, n,j;
//    double sum;
//    scanf("%d", &n);
//    sum = 0;
//    i = 1;
//    for (j = 1; j <= n; j++)
//    {
//        if (i % 2 == 0)
//        {
//            i += 1;
//        }
//        sum = sum + 1.0 / i;
//        i++;
//    }
//    printf("sum = %.6f", sum);
//
//    return 0;
//}

/*nt sum(int m, int n)
{
    int sum ;
    sum = m;
    int c, i;
    c = n - m;
    for (i = 0; i < c; i++)
    {
        m += 1;
        sum += m;
    }
    return sum;
}
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}*/


//int main()
//{
//    printf("****\n***\n**\n*");
//    return 0;
//}

//本题要求编写程序，求一个给定的m×n矩阵各行元素之和
//int main()
//{
//    int m, n;
//    scanf("%d %d", & m,&n);
//    int arr[6][6];
//    for (int i = 0; i < m; i++)
//    {
//        ;
//        for (int j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int i = 0;
//    for (i = 0; i < m; i++)
//    {
//        int j, sum = 0;
//        for (j = 0; j < n; j++)
//        {
//            sum += arr[i][j];
//        }
//        printf("%d \n", sum);
//    }
//    return 0;
//}



//给定某数字A（1≤A≤9）以及非负整数N（0≤N≤100000），求数列之和S=A+AA+AAA+⋯+AA⋯A（N个A）。例如A=1, N=3时，S=1+11+111=123。
//int main()
//{
//    int i, n, s=0,a,m=0;
//
//    scanf("%d", &a);
//    scanf("%d", &n);
//    s = a; m = a;
//    for (i = 1; i <n; i++)
//    {
//        a= a * 10 + m;
//        s += a;
//    }
//    printf("%d", s);
//
//
//    return 0;
//}




















//计算一个整形数据中二进制1的个数
//int main()
//{
//    int a=0,i;
//    scanf("%d", &a);
//    int count=0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((a >> i) & 1 == 1)
//        {
//            count++;
//        }
//    }
//    /*while (a)
//    {
//        if (a % 2 == 1)
//        {
//            count++;
//        }
//        a = a / 2;
//    }*/
//    printf("%d", count);
//    return 0;
//}





//不用定义变量交换数字
//int main()
//{
//    int a = 3;
//    int b = 5;
//    printf("before:a=%d,b=%d\n", a, b);
//    a = a ^ b;
//    b = a ^ b;
//    a = b ^ a;
//    printf("after:a=%d,b=%d\n", a, b);
//}

//青蛙跳台阶
//int Jump(int n)
//{
//    if (n == 1)
//    {
//        return 1;
//    }
//    else if (n == 2)
//    {
//        return 2;
//    }
//    else
//    {
//        int i; int a=1, b=1, c;
//        for (i = 0; i < n - 1; i++)
//        {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//        return c;
//    }
//}
//
//int main()
//{
//    printf("请输入青蛙跳的台阶数:\n");
//    int n;
//    scanf("%d", &n);
//    int ret = Jump(n);
//    printf("%d\n", ret);
//
//    return 0;
//}



//汉诺塔
//void move(char c1, char c2)
//{
//    printf("%c->%c\n", c1, c2);
//}
//void hanoi(int n, char x, char y, char z)
//{
//    if (n == 1)
//    {
//        move(x, z);
//    }
//    else
//    {
//        hanoi(n - 1, x, z, y);
//        move(x, z);
//        hanoi(n - 1, y, x, z);
//    }
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    hanoi(n, 'a', 'b', 'c');
//    return 0;
//}














//汉诺塔
//void move(char c1, char c2) 
//{
//    printf("%c->%c\n", c1, c2);
//
//}
//void hanoi(int n,char x,char y,char z)
//{
//    if (n == 1)
//    {
//        move(x, y);
//    }
//    else
//    {
//        hanoi(n - 1, x, z, y);
//        move(x, z);
//        hanoi(n - 1, y, x, z);
//    }
//}
//
//int main()
//{
//    int n; 
//    scanf("%d", &n);
//    hanoi(n,'a','b','c');
//    return 0;
//}

//求第n个斐波那契数（效率低，计算量大）
//int Fib(int n)
//{
//    if (n <= 2)
//        return 1;
//    else
//        return Fib(n - 1) + Fib(n -2);
//}

//循环求第n个斐波那契数列
//int Fib(int n)
//{
//    int a = 1, b = 1,i;
//    long c;
//    if (n == 1||n==2)
//        return 1;
//    else
//        for (i = 0; i < n-1; i++)
//        {
//            c = a + b;
//            a = b;
//            b = c;
//        }
//    return c;
//
//}
//int main()//先写出函数怎么用，再实现函数。
//{
//    int n;
//    scanf("%d", &n);
//    int ret = Fib(n);
//    printf("%d", ret);
//   
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret =    1,i;
//    for (i = 1; i <= n; i++)
//    {
//        ret *= i;
//    }
//    printf("%d", ret);
//    return 0;
//}

//递归求n！
//int Fac(int n)
//{
//    if (n <= 1)
//    return 1;
//    if (n > 1)
//    {
//        return n * Fac(n - 1);
//    }
//}
//
//int main()
//{
//    int n; int ret;
//    scanf("%d", &n);
//    ret=Fac(n);
//    printf("%d", ret);
//    return 0;
//}
//int my_strlen(char* str)
//{
//    int count = 0;
//    while (*str != '\0')//记得变量为指针变量
//    {
//        count++;
//        str++;
//    }return count;
//}
//int main()
//{
//    char arr[20];
//    scanf("%s", &arr);
//    
//    int len = my_strlen(arr);
//    printf("%d", len);
//
//    return 0;
//}
//int my_strlen(char* arr)
//{
//    if (*arr != '\0')
//    {
//        return 1 + my_strlen(arr + 1);
//    }
//    else
//        return 0;
//        
//}

//int my_strlen(char* str)
//{
//    int count = 0;
//    while(*str!=0)
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//
//
//int main()
//{
//    char arr[20];
//    scanf("%s", &arr);
//    int len = my_strlen(arr);
//    printf("%d", len);
//    return 0;
//}











//int main()
//{
//    int n = 0,i;
//    int arr[11];
//    scanf("%d", &n);
//    for (i=0;i<n;i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int j; int max=0;
//    for (j=0;j<n;j++)
//    {
//        if (max < arr[j])
//        {
//            max = arr[j];
//        }
//    }
//    printf("最大值是%d，其下标为%d", arr[j], j);
//    return 0;
//}


//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//      //不能打else否则会直接执行下一语句
//        printf("%d ",n%10);
//        
//}
//
//int main()
//{
//     unsigned int n;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}递归是有限制条件的，当满足这个限制条件时递归不在进行下去；每次递归调用之后将越来越接近这个限制条件。

//void print(int n)
//{
//    if (n > 9)
//    {
//        print(n / 10);
//    }
//    printf("%d ", n % 10);
//}
//int main()
//{
//    unsigned int n;
//    scanf("%d", &n);
//    print(n);
//    return 0;
//}








//冒泡排序
//void bubble(int arr[],int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz - 1; i++)
//    {
//        int j = 0;
//        int f=1;
//        for (j = 0; j < sz - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//                f = 0;
//            }
//        }if (f == 1)
//            break;
//    }
//}
//
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble(arr, sz);
//    int i;
//    for (i = 0; i < sz;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}











//int main()
//{
//    int a[10],i,max,k;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d",&a[i]);
//
//    }
//    max = a[0];
//    k = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (max < a[i])
//        {
//            max = a[i];
//            k = i;
//        }
//    }
//    printf("最大值是%d,下标是%d", & max, &k);
//    return 0;
//}









//void Add(int* p)
//{
//    (*p)++;
//}
//int main()
//{
//    int n = 0;
//     Add(&n);
//     printf("%d  ", n);
//     Add(&n);
//     printf("%d ", n);
//    return 0;
//}

 /*int search(int arr[], int k, int se)
{
    int left = 0;
    int right = se - 1;
   
    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (arr[mid]>k )
        {
            right = arr[mid] - 1;
        }
        else if (arr[mid]<k)
        {
            left = arr[mid] + 1;
        }
        else
        {
            return mid;
        }

    }return -1;
}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7; int ret = 0;
    int se = sizeof(arr) / sizeof(arr[0]);
      ret = search(arr, k, se);
  
    if (ret==-1)
    {
        printf("找不到相应的数字");
    }
    else
    {
        printf("找到了，相应的下标是:%d\n", ret);
    }

    return 0;
}*/








//判断是否为闰年（函数）
//int is_leap_year(int x)
//{
//    if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//        return 1;
//    else
//        return 0;
//}
//
//
//int main()
//{
//    int year;
//    for (year = 1000; year <= 2000; year++)
//    {
//        if (1 == is_leap_year(year))
//            printf("%d ", year);
//    }
//
//    return 0;
//}





///*  简单选择排序算法 */
//for (i = 0; i < n - 1; i++)
//{
//    k = i;
//    for (j = i + 1; j < n; j++)
//    {
//        if (a[k] < a[j])
//            k = j;
//    }
//    if (k != i)
//    {
//        t = a[i];
//        a[i] = a[k];
//        a[k] = t;
//    }
//}





//换钱
//int main()
//{
//    int fen5 = 1, fen2 = 1, fen1 = 1,count=0, total = 1, x = 0;
//    scanf("%d", &x);
//    
//    for (fen5 = x / 5; fen5 > 0; fen5 --)
//    {
//        for (fen2 = x / 2; fen2 > 0; fen2--)
//        {
//            for(fen1=x/1;fen1>0;fen1--)
//                if (x == (fen1 + fen5 * 5 + fen2 * 2))
//                {
//                    total = fen5 + fen2 + fen1;
//                    count++;
//                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
//                }
//        }
//    }printf("\n");
//    printf("count=%d\n", count);
//    return 0;
//}


//int main()
//
//{
//    int N = 0,fen = 0,i=0,you=0,hg=0,w=0;
//    scanf("%d\n", &N);
//    while (i < N)
//    {
//        scanf("%d", &fen);
//        if (fen >= 85)
//        {
//            you++;
//        }
//        if (fen < 85 && fen >= 60)
//        {
//            hg++;
//        }
//        if (fen < 60)
//        {
//            w++;
//        }i++;
//    }
//
//    printf("%d %d %d", you, hg, w);
//    return 0;
//}


//int main()
//{
//    int m, n ;
//    scanf("%d %d", &m, &n);
//    int i = 0;
//    for (i = m; i <= n; i++)
//    {
//        int j =1 ;
//        while (j < i)
//        {
//            if (i % j == 0)
//            {
//                printf("i=+%d\n", &j);
//                j++;
//            }
//                
//
//        }
//    }printf("\n");
//
//
//    return 0;
//}
//



//int main()
//{
//    int n = 0, sum = 0, score = 0,  count = 0;
//    double average;
//    scanf("%d", & n);
//    if (n == 0)
//    {
//        count = 0;
//        average = 0;
//
//    }
//    else
//    { 
//        int i = 0;
//        for (i = 0; i < n; i++)
//        {
//            scanf("%d", &score);
//            sum += score;
//            if (score >= 60)
//            count++;
//        }
//        average = 1*sum / n;
//        printf("average=%.1lf count=%d", average, count);
//    }
//
//
//    return 0;
//}







//猜数字游戏
//void menu()
//{
//    printf("************************\n");
//    printf("*** 1.play    0.exit ***\n");
//    printf("************************\n");
//
//}
//
//void game()
//{
//    
//
//    int ret = 0;
//    int guess=0;
//    
//    ret = rand() % 100 + 1;
//    while (1)
//    {
//        printf("输入猜的数字");
//        scanf("%d", &guess);
//        if (guess > ret)
//        {
//            printf("猜大了\n");
//        }
//        else if (guess < ret)
//        {
//            printf("猜小了\n");
//        }
//        else
//        {
//            printf("猜对了\n");
//            break;
//        }
//    }
//}
//
//
//
//
//
//
//int main()
//{
//
//    int input = 0;
//    srand((unsigned int)time(NULL));
//    do
//    {
//        menu();
//        printf("请输入>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1: game();
//            break;
//        case 0: printf("退出游戏\n");
//            break;
//        default: printf("输入错误\n");
//
//        }
//    } while (input);
//
//    return 0;
//}




//输出倒三角
//int main()
//{
//    char ch = 65; int n = 0,i=0;
//    scanf("%d", &n);
//    if(n<7)
//        while (n != 0)
//        {
//            for (i = 0; i < n; i++)
//            {
//                printf("%c ", ch);
//                ch++;
//            }
//            printf("\n");
//            n--;
//        }
//    else
//    {
//        printf("输入错误");
//    }
//    
//    return 0;
//}

//int main()
//{
//    int m;
//    scanf("%d", &m );
//    int i;
//    for (i = 1; i <= m; i++)
//    {
//        int j;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-3d ", i, j, i * j);
//        }
//        printf("\n");
//    }
//    return 0;
//}




//int main()
//乘法表
//{
//    int i = 1;
//    for (i = 1; i <= 9; i++)
//    {
//        int j = 1;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-2d ", i, j, i * j);
//
//        }
//        printf("\n");
//    }
//    return 0;
//}
//












//int main()乘法表
//{
//    int i = 0;
//    for (i = 1; i <= 9; i++)
//    {
//        int j = 1;
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%-2d ", i, j, i * j);
//
//        }
//        printf("\n");
//    }
//
//    return 0;
//}








//换位函数
//void Swap(int* pa, int* pb)
//{
//    int tmp = 0;
//    tmp = *pa;
//    *pa = *pb;
//    *pb = tmp;
//}
//int main()
//{
//    int a = 10;
//    int b = 20;
//    printf("a=%d b=%d\n", a, b);
//    Swap(&a, &b);
//    printf("a=%d b=%d\n", a, b);
//
//
//    return 0;
//}









//int main()
//{
//    char arr1[] = "I LOVE BENZO!!!";
//    char arr2[] = "###############";
//    int left = 0;
//    //int right = sizeo(arr1) / sizeof(arr1[0]) - 2;
//    int right = strlen(arr1) - 1;
//    while (left<=right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s,\n", arr2);
//        Sleep(1000);
//        system("cls");//执行系统名令的一个函数-cls-清空屏幕
//        left++;
//        right--;
//
//    }
//    return 0;
//}




//找数字
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int  k = 17;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//
//    while (left<=right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else {
//            printf("找到了，下标是：%d\n", mid);
//            break;
//        }
//
//    }
//    if(left>right)
//    {
//        printf("找不到");
//    }
//
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 1; int ret = 1;
//    while (i <= n)
//    {
//        ret = i*ret;
//            i++;
//    }
//    printf("%d", ret);
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    int i = 1; int ret = 1;
//    int sum = 0;
//    for (n = 1; n <= 10; n++)
//    {
//        while (i <= n)
//        {
//            ret = i * ret;
//            i++;
//        }
//        sum += ret;
//    }
//    printf("%d", sum);
//    return 0;
//}有点小成就感~



//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d", i);
//        i++;
//    }
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int n;
//    while (scanf("%d", &n) == 1)
//    {
//        switch (n / 10)
//        {
//        case 10:
//        case  9:printf("A\n"); break;
//        case  8:printf("B\n"); break;
//        case  7:printf("C\n"); break;
//        case  6:printf("D\n"); break;
//        default:printf("E\n"); break;
//        }
//    }
//    return 0;
//}
//

//int main()
//{   
//    int x;
//    char grade;
//    printf("input the score x=");
//    scanf("%d", &x);
//    if (x >= 90)
//    {
//        grade='A';
//    }
//    else if (x<90&&x>=80)
//    {
//        grade = 'B';
//
//    }
//    else if (x >= 70&&x<80)
//    {
//        grade = 'C';
//    }
//    else if (x >= 60&&x<70)
//    {
//        grade = 'D';
//    }
//    else 
//    {
//        grade = 'E';
//    }
//    printf("%c", grade);
//
//
//
//
//    return 0;
//}


//void main()
//{
//    int num,digit;
//    printf("input:");
//        scanf("%d", &num);
//        do 
//    {
//            digit = num % 10;
//            printf("%d", digit);
//            num = num / 10;
//        } while (num != 0);
//}


//
//int main()
//{
//    int i, a, b, c;
//    scanf("%d", &i);
//    if (100 <= i <= 999)
//    {
//        a = i % 10;
//        b = i / 100;
//        c = i / 10 % 10;
//        if (i = pow(a, 3) + pow(b, 3) + pow(c, 3))
//            printf("Yes");
//        else
//            printf("No");
//    }
//    else printf("Invalid Value.");
//    return 0;
//}


//int main()
//{
//    double W,H;
//    scanf("%lf",&H);
//    W = (H - 100) * 1.8;
//    
//    printf("W=%.1lf",W);
//    
//    return 0;
//}


//int main()
//{
//    double x, y;
//    scanf("%lf", &x);
//    if (x == 0)
//    {
//        printf("f(0,0)=0.0\n");
//    }
//    else
//    {
//        y = 1.0 / x;
//        printf("f(%.01lf) = %.1lf\n", x, y);
//    }
//
//    return 0;
//}


//int main()
//{
//    double n, pay, pay1;
//    int m;
//    double pay2;
//    scanf("%lf%d", &n, &m);
//    if (n <= 3)
//    {
//        pay1 = 10;
//    }
//    else if (n > 3 && n <= 10)
//
//    {
//        pay1 = 10 + (n - 3) * 2;
//    }
//    else if (n > 10)
//    {
//        pay1 = 24 + (n - 10) * 3;
//        pay2 = floor(m * 1.0 / 5) * 2;
//        pay = pay1 + pay2;
//    }
//    printf("%.0lf", pay);
//    return 0;
//
//    }
       

//{
//	int year = 0;
//	printf("请输入想确认的年数\n");
//	scanf("%d",&year);
//	if ("year%4==0&&year%100!==0||year%400==0")
//	{
//		printf("这一年是闰年");
//
//	}
//	else
//	{
//		printf("这一年是平年");
//	}
//
//	return 0;