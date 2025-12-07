#include <stdio.h>
//
//int main()
//{
//	printf("abcdef\n");
//	return 0;
//}
//


//int main()
//{
//	printf("%c\n", 'X');
//	printf("%c\n", 88);
//	printf("%c\n", '\130');
//	printf("%c\n", '\x58');
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//strlen -- string length
//	//strlen在求字符串长度的时候，统计的是\0之前的字符个数
//	//int len = strlen("abcdef");//
//	//printf("%d\n", len);
//
//	//8进制数字是：0 1 2 3 4 5 6 7 组成的
//	int len = strlen("C:\\code\138\\class\test.c");//
//	printf("%d\n", len);
//
//	return 0;
//}

//int main()
//{
//	printf("hehe\n"); //函数调用语句
//	;//空语句
//	3 + 5;//表达式语句
//
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = a + b;//表达式语句
//
//	return 0;
//}
//


/*
int main()
{
	printf("hehe\n");

	return 0;
}
*/

//注释和取消注释的快捷键
//注释: Ctrl + k + c
//取消注释: Ctrl + k + u
//int main()
//{
//	printf("hehe");//这是一个函数调用
//	return 0;
//}
//



#include <stdbool.h>

//int main()
//{
//	//_Bool flag1 = true;
//	//_Bool flag2 = false;
//
//	bool flag1 = true;
//	bool flag2 = false;
//
//	//if (flag1)
//	//{
//	//	printf("hehe\n");
//	//}
//	if (flag2)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}


//sizeof 计算的结果的类型是size_t,size_t类型的数据打印是使用%zu

//int main()
//{
//	int a = 10;
//	printf("%zu\n", sizeof(a));
//	printf("%zu\n", sizeof(int));
//
//	return 0;
//}


//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(_Bool));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//	printf("%zu\n", sizeof(long double));
//
//	return 0;
//}
//
//

//#include <limits.h>
//int main()
//{
//    //12;
//    //110;
//    //short s = 12;
//    //int b = 10;
//    //printf("%zu\n", sizeof(s = b + 1));
//
//    //printf("s = %d\n", s);
//    printf("%d\n", INT_MIN);
//    return 0;
//}


//int main()
//{
//	int age1;
//	unsigned int age2;
//	float weight;
//	int score;
//
//	return 0;
//}

//int main()
//{
//	int age = 0;//初始化
//
//	float score;
//	score = 20.0f;//赋值
//
//	return 0;
//}

//全局变量 -- 共享单车
//int d;
//
//int main()
//{
//	//局部变量 - 家里的自行车
//	//{
//	//	int a = 10;
//	//	int b = 20;
//	//}
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	printf("%d\n", d);
//	return 0;
//}


//int a = 10;
//int main()
//{
//	int a = 20;
//	printf("%d\n", a);//当全局变量和局部变量的名字相同时，局部优先
//
//	return 0;
//}

int main()
{
	int a = 10;//变量创建的本质是向内存申请空间

	return 0;
}