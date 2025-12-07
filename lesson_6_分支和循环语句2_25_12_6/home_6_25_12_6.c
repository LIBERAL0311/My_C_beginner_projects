#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a + b > c && a + c > b && b + c > a)
//    {
//        if (a == b && a == c)
//        {
//            printf("Equilateral triangle!\n");
//        }
//        else if (a == b || b == c || c == a)
//        {
//            printf("Isosceles triangle!\n");
//        }
//        else
//        {
//            printf("Ordinary triangle!\n");
//        }
//    }
//    else
//    {
//        printf("Not a triangle!\n");
//    }
//
//    return 0;
//}

//
//int main()
//{
//    int i, j;
//
//    for (i = 1; i <= 9; i++)
//    {
//        for (j = 1; j <= i; j++)
//        {
//            printf("%d*%d=%d ", j, i, j * i);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}


//int main()
//{
//    int i;
//    int x;
//    int max;
//
//    scanf("%d", &max);
//
//    for (i = 1; i < 10; i++)
//    {
//        scanf("%d", &x);
//        if (x > max)
//        {
//            max = x;
//        }
//    }
//
//    printf("最大值是: %d\n", max);
//
//    return 0;
//}


//int main()
//{
//    int i;
//    double sum = 0.0;
//
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 2 == 1)      // 奇数项加
//        {
//            sum += 1.0 / i;
//        }
//        else                // 偶数项减
//        {
//            sum -= 1.0 / i;
//        }
//    }
//
//    printf("结果是：%lf\n", sum);
//
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("数字9出现了 %d 次\n", count);
//
//
//
//	return 0;
//}

//int main()
//{
//    int i, j;
//
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;          
//
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)       
//            {
//                flag = 0;
//                break;            
//            }
//        }
//
//        if (flag == 1)         
//        {
//            printf("%d ", i);    
//        }
//    }
//
//    return 0;
//}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000;year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		{
			printf("%d ", year);
		}
	}
}