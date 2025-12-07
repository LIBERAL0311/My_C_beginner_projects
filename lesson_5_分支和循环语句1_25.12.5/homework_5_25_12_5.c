#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int i, t;

    for (i = 0; i < 3; i++)
    {
        if (a < b) { t = a; a = b; b = t; }
        if (b < c) { t = b; b = c; c = t; }
    }

    printf("%d %d %d\n", a, b, c);

    return 0;
}
