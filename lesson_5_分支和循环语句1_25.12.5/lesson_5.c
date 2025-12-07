#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	//char arr[20];
	////scanf("%s", arr);//%s读取字符串时遇到空格就停止
	//////%[^\n]//表示遇到换行符\n停止
	////scanf("%[0-9]", arr);
	////printf("%s\n", arr);
	//////%c读取单个字符，包括空格
 //  
	//char ch;
	//scanf(" %c", &ch);
	//printf("%c\n", ch);//注意%c前面的空格的作用
	/*char arr[5];
	scanf("%4s", arr);
	printf("%s", arr);*/

	//int year = 0;
	//int month = 0;
	//int day = 0;
	//// 使用 %*c 跳过分隔符，检查 scanf 返回值以保证成功读取三个整数
	//scanf("%d%*c%d%*c%d", &year, &month, &day);
	//printf("%d %d %d\n", year, month, day);

	//int n = 0;
	//scanf("%d", &n);
	//if (n % 2 == 1)//一个等号是赋值，两个等号是比较
	//{
	//	printf("奇数\n");
	//}
	//else
	//{
	//	printf("偶数\n");
	//}

	/*int age = 0;
	printf("请输入年龄\n");
	scanf("%d", &age);
	if (age >= 18)
	{
		printf("恭喜你\n");
		printf("已成年");
	}
	else
		printf("未成年");*/
		/*int m = 0;
		scanf("%d", &m);
		if (m > 0)
			printf("正数\n");
		else
		{
			if (m == 0)
				printf("零\n");
			else
				printf("负数\n");
		}*/
		//int a = 0;
		//scanf("%d", &a);
		//if (a > 0)
		//	printf("正数\n");
		//else if (a == 0)
		//	printf("零\n");
		//else
		//	printf("负数\n");

		/*int age = 0;
		scanf("%d", &age);
		if (age <= 0)
			printf("输入错误\n");
		else if (age < 18)
			printf("小灯\n");
		else if
			(age >= 18 && age <= 44)
			printf("青灯\n");
		else if (age > 45 && age <= 59)
			printf("中老灯\n");
		else if (age <= 89)
			printf("老灯\n");
		else
			printf("超级老灯\n");*/

			//int t = 0;
		 //   int o = 1;
			//if (t == 1)
			//	if (o == 1)
			//		printf("1\n");
			//	else
			//		printf("2\n");//else对应最近的if,除非有大括号

			//int r = 0;
			//scanf("%d", &r);
			//if (3 == r)//常量在前可以避免写成赋值语句
			//{
			//	printf("hehe\n");
			//}

			//int i = 0;
			//int j = 0;
			//int k = 0;
			//scanf("%d%d%d", &i, &j, &k);
			//if (i < j && i < k)
			//	printf("hehe\n");

			//int u = 0; 
			//int v = 0;
			//scanf("%d%d", &u, &v);

			//v = (u > 3 ? 3 : -3);
			//printf("%d\n", v);

		   /* int a = 0;
			int b = 0;
			int m = 0;
			scanf("%d %d", &a, &b);
			m = (a > b ? a : b);
			printf("%d\n", m);*/
			//
			//int flag = 0;
			//scanf("%d\n", &flag);
			//if (flag)//非零为真
			//{
			//	printf("True\n");
			//}
			//if (!flag)//!取反
			//{
			//	printf("False\n");
			//}

			//&&逻辑与，两个条件都为真，结果才为真;有假全为假


			/*int month = 0;
			scanf("%d", &month);
			if (month == 12 || month == 1 || month == 2)
			{
				printf("winter is coming!\n");
			}*/

			/*int year = 0;
			scanf("%d", &year);
			if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))

				{
					printf("%d is a leap year\n", year);
				}
				else
				{
					printf("%d is not a leap year\n", year);
				}
			*/

			// int s = 0;
			// scanf("%d", &s);
			// switch (s % 3 )//switch后面只能是整型表达式;switch是特殊的if else，表示同种的多分支选择
			// {
			//   case 0 ://，case和1中间有空格；冒号
			   //  printf("余数是零\n");
			   //  break;
			   //case 1:
			   //  printf("余数是1\n");
			   //  break;
			   //case 2:
			   //  printf("余数是2\n");
			   //  
			//   break;//switch中case是出口，break是出口
			// }

	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
      case 1 :
	  case 2 :
	  case 3 :
	  case 4 :
	  case 5 :
	    printf("工作日\n");
	    break;
      case 6 :
	  case 7 :
	    printf("周末\n");
	    break;
	  default:
		  printf("输入错误\n");
		  break;

	
	
	}



	return 0;
}
