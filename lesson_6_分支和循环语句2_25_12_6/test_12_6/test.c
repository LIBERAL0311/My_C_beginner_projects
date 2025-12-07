#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	int i = 1; //循环变量的初始化
//
//	while (i <= 10)//循环的判断条件
//	{
//		printf("%d ", i);
//		//i++;
//		i += 2;//循环变量的调整
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//1234
//	while (n)
//	{
//		printf("%d ", n % 10);
//		//n = n / 10;
//		n /= 10;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	//for循环中，初始化，判断，调整三个部分语法上都是支持省略不写的
//	//是否省略不写呢，取决于你自己程序的逻辑
//	//但是判断部分如果不写，意味着判断部分恒成立
//	for (i = 1; ; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int sum = 0;//存放算出的和
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//


//int main()
//{
//	int i = 0;
//	int sum = 0;//存放算出的和
//	for (i = 3; i <= 100; i+=3)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}
//

//
//int main()
//{
//	int count = 0;//计数
//	int n = 0;
//
//	scanf("%d", &n);
//	
//	do
//	{
//		n /= 10;
//		count++;//4
//	} while (n);
//
//	printf("%d\n", count);
//	return 0;
//}
//

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}
//


//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 7; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//产生2~i-1之间的数字
//		int flag = 1;//假设i当前就是素数
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//标记一下，i不是素数
//				break;
//			}
//		}
//		//1 break -- i不是素数
//		//2 没有找到能整除i的j,i就是素数
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//	goto next;
//	printf("haha\n");
//	next:
//	printf("这是第一个注释\n");
//
//	return 0;
//}

//int main()
//{
//	again:
//	printf("hehe\n");
//	goto again;
//
//	return 0;
//}

//想写一个关机程序
//1. 程序运行起来后，1分钟内就关机了
//2. 但是输入：我是猪，就取消关机

//1. system函数可以执行系统命令
//2. 两个字符串比较大小是不能使用==的,应该使用strcmp函数
//strcmp返回的是0，表示两个字符串相等
#include <windows.h>
#include <string.h>

//int main()
//{
//	char arr[20] = {0};
//	//关机
//	system("shutdown -s -t 60");
//
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", arr);
//		//判断
//		if (strcmp(arr, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("你很配合，取消关机\n");
//			break;
//		}
//	}
//
//	return 0;
//}
//

//函数就是把一段代码进行了封装
//void 表示函数不会返回值
//void game()
//{
//	//完成猜数字游戏的逻辑
//	//1. 生成随机数
//	
//	//2. 猜数字
//
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("*************************\n");
//		printf("*****   1. play     *****\n");
//		printf("*****   0. exit     *****\n");
//		printf("*************************\n");
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//game函数内部完成猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，根据菜单的选项输入\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

#include <stdlib.h>

int main()
{
	srand(3);
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());

	return 0;
}