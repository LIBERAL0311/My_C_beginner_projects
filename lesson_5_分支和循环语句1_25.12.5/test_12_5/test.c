#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	char arr[20];
//	//输入一个字符串
//	//scanf("%s", arr);
//	scanf("%[0-9]", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}

//int main()
//{
//	char arr[20];
//	//输入一个字符串
//	scanf("%s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	char arr[20];
//	//输入一个字符串
//	scanf("%[^\n]", arr);//读取字符串，直到遇到\n停止
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", n);
//
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf(" %c", &ch);
//	printf("---%c---\n", ch);
//
//	return 0;
//}


//int main()
//{
//	char arr[5];
//	scanf("%4s", arr);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入2个整数
//	scanf("%d%d", &a, &b);
//
//	printf("a = %d b = %d\n", a, b);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//
//    scanf("%d-%d-%d", &year, &month, &day);//2025-12-5    2025/12/5   2025*12*5 ...
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//}

//int main()
//{
//    int year = 0;
//    int month = 0;
//    int day = 0;
//
//    scanf("%d%*c%d%*c%d", &year, &month, &day);//2025-12-5    2025/12/5   2025*12*5 ...
//    printf("%d %d %d\n", year, month, day);
//    return 0;
//}

//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//判断
//	if (n % 2 == 1)//== 是判断是否相等
//		printf("奇数\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//判断
//	if (n % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//输入
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年\n");
//		printf("谈恋爱\n");
//	}
//	else 
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//
//
//	//判断
//	if (n > 0)
//		printf("正数\n");
//	else //0  负数
//	{
//		if (n < 0)
//			printf("负数");
//		else
//			printf("0\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//
//
//	//判断
//	if (n >= 0)
//	{
//		if (n > 0)
//			printf("正数\n");
//		else
//			printf("0\n");
//	}
//	else
//	{
//		printf("负数");
//	}
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//
//
//	//判断
//	if (n > 0)
//		printf("正数\n");
//	else if (n < 0)
//		printf("负数");
//	else
//		printf("0\n");
//	
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	//输入一个值
//	scanf("%d", &age);
//	//判断
//	if (age < 0)
//		printf("输入的年龄非法\n");
//	else if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)//>=18
//		printf("青年\n");
//	else if (age <= 59)//>44
//		printf("中老年\n");
//	else if (age <= 89)//>59
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//    {
//        printf("haha\n");
//    }
//    
//    return 0;
//}


//int main()
//{
//	int a = 0;
//
//	return 0;
//}


//int main()
//{
//	int r = (4 < 5);
//	//0 - 假
//	//非0 - 真
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int r = 0;
//	scanf("%d", &r);
//	//if (r == 3)
//	//当一个变量和一个常量在比较相等的时候时候，可以把常量放在左边
//	if(3 == r)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d %d %d", &i, &j, &k);//8 2 5
//	if (i < j < k)//err
//	{
//		printf("i < j < k");
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d %d %d", &i, &j, &k);
//	if (i < j && j < k)  //&& -- 并且
//	{
//		printf("i < j < k");
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);//50
//	if (18 <= age <= 36)//err
//		printf("青年\n");
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);//50
//	if (age >=18 && age <= 36)
//		printf("青年\n");
//
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int m = 0;
//    scanf("%d%d", &a, &b);
//    //找出a和b中的较大值
//    if (a > b)
//        m = a;
//    else
//        m = b;
//    printf("%d\n", m);
//
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int m = 0;
//    scanf("%d%d", &a, &b);
//    //找出a和b中的较大值
//    m = (a > b ? a : b);
//
//    printf("%d\n", m);
//
//    return 0;
//}


//int main()
//{
//	int flag = 0;
//	scanf("%d", &flag);
//	//flag 为真，我们要打印hehe
//	if (flag)
//		printf("hehe\n");
//
//	//flag 为假，我们要打印haha
//	if (!flag)
//		printf("haha");
//
//	if (flag == 0)
//		printf("haha");
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//	{
//		printf("春季\n");
//	}
//	return 0;
//}


//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬季\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0) && (year % 100 != 0) || (year%400==0))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("平年\n");
//	}
//
//	return 0;
//}


//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);//
//    return 0;
//}

//int main()
//{
//    int i = 0, a = 1, b = 2, c = 3, d = 4;
//    i = a++ || ++b || d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}

//
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ || ++b || d++;
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}
//

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if (n % 3 == 0)
//		printf("余数是0\n");
//	else if(n % 3 == 1)
//		printf("余数是1\n");
//	else if(n % 3 == 2)
//		printf("余数是2\n");
//
//	return 0;
//}
//


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	switch (n % 3)
//	{
//	case 0:
//		printf("余数是0\n");
//		break;
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	}
//
//	return 0;
//}
//
//
//#include <stdio.h>
//int main()
//{
//    int day = 0;
//    scanf("%d", &day);
//    switch (day)
//    {
//        case 1:
//            printf("星期一\n");
//            break;
//        case 2:
//            printf("星期二\n");
//            break;
//        case 3:
//            printf("星期三\n");
//            break;
//        case 4:
//            printf("星期四\n");
//            break;
//        case 5:
//            printf("星期五\n");
//            break;
//        case 6:
//            printf("星期六\n");
//            break;
//        case 7:
//            printf("星期天\n");
//            break;
//    }
//    return 0;
//}

//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day)
//	{
//	default:
//		printf("输入错误，重新输入\n");
//		break;
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//
//	}
//
//	return 0;
//}



//int main()
//{
//	float n = 3.14f;
//	switch (n)//err
//	{
//	case 1.0://err
//		break;
//	}
//
//	return 0;
//}