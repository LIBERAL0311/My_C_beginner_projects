#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	printf("%d\n", 3 + 5);
//	
//	int a = 5;
//	int b = 2;
//	int c = a - b;
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 3 * 5);
//
//	int a = 5;
//	int b = 2;
//	int c = a * b;
//	printf("%d\n", c);
//
//	return 0;
//}


//int main()
//{
//	printf("%d\n", 30 / 5);//6
//
//	//int a = 5;
//	//int b = 2;
//	//printf("%d\n", a / b);//2
//	//   /除号的两端都是整数的时候，执行的是整数的除法，得到的是整除后的商
//	//   对于除法来说，要算出小数，除号的两端至少得有一个浮点数
//
//	printf("%f\n", 5.0 / 2.0);//2.5
//	//%f  %lf 打印小数的时候 ，小数点后默认就是打印6位
//	//
//	return 0;
//}

//
//int main()
//{
//    int score = 5;
//    score = (score / 20.0) * 100;
//    //       int     double
//    //          double       int
//    //                double
//    printf("%d\n", score);
//
//    return 0;
//}
//


//int main()
//{
//	int a = 5 / 2;//商
//	int b = 5 % 2;//余数
//	printf("%d\n", b);
//
//	return 0;
//}
//


//int main()
//{
//	int a = 100;//初始化
//	a = 0;//赋值
//	return 0;
//}
//
//
//int main()
//{
//	//int a = 3;
//	//int b = 5;
//	//int c = 0;
//
//	//c = b = a + 3;//连续赋值，从右向左依次赋值的。
//
//	int a = 10;
//	//a = a + 3;
//	//a += 3;//复合赋值
//
//	//a = a - 2;
//	//a -= 2;//复合赋值
//	//a *= 2;
//	//a /= 2;
//	//a %= 2;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//a = a + 1;
//	//a += 1;
//	//a++;//让a的值增加1
//	++a;//让a的值增加1
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++: 先使用，再+1
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++: 先+1, 后使用
//	printf("%d\n", a);//11
//	printf("%d\n", b);//11
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a--;//后置--：先使用，后-1
//	printf("%d\n", a);//9
//	printf("%d\n", b);//10
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = --a;//前置--：先-1，后使用
//	printf("%d\n", a);//9
//	printf("%d\n", b);//9
//
//	return 0;
//}
//
//int main()
//{
//	int a = 1;
//	int b = (++a + ++a + ++a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = +10;
//	printf("%d\n", +a);
//	return 0;
//}


//int main()
//{
//	int a = -10;
//	printf("%d\n", -a);
//	return 0;
//}
//
// 
//int main()
//{
//	int a = 100;
//	double d = 3.75;
//	a = (int)d;
////int   double
//	printf("%d\n", a);
//	return 0;
//}


//
//int main()
//{
//	int a = 100;
//	double d = 3.14;
//
//	d = a;
//	printf("%f\n", d);
//
//	return 0;
//}


//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	printf("hello\nworld\n");
//
//	return 0;
//}

//int main()
//{
//	int n = 3;
//	printf("%d", n);
//
//	return 0;
//}

//int main()
//{
//	int n = 5;
//	printf("there are %d apples\n", n);
//
//	return 0;
//}

//
//int main()
//{
//	printf("%s will come tonight\n", "zhangsan");
//	printf("%s will come tonight\n", "lisi");
//
//	return 0;
//}

//int main()
//{
//	//xxxx says it is xx o'clock
//	printf("%s says it is %d o'clock\n", "wangwu", 20);
//	printf("%s says it is %d o'clock\n", "cuihua", 12);
//
//	return 0;
//}

//int main()
//{
//	printf("%E", 123.45);
//	return 0;
//}


//int main()
//{
//	printf("%7d\n", 123);
//	printf("%7d\n", 123456);
//
//	return 0;
//}

//int main()
//{
//	printf("%-7d###\n", 123);
//	printf("%-7d###\n", 123456);
//
//	return 0;
//}

//int main()
//{
//	printf("%f\n", 12.34);
//	printf("%12f\n", 12.34);
//
//
//	return 0;
//}


//int main()
//{
//	printf("%+d\n", 12);
//	printf("%+d\n", -12);
//
//	return 0;
//}

//int main()
//{
//	printf("%f\n", 12.3456);
//	printf("%.4f\n", 12.3456);
//	printf("%.3f\n", 12.3456);
//	printf("%.2f\n", 12.3456);
//	printf("%.1f\n", 12.3456);
//
//	printf("%6.1f\n", 0.5);
//	int a = 6;
//	int b = 2;
//	printf("%*.*f\n", a, b, 0.5);
//	//   0.5
//
//	return 0;
//}

//
//int main()
//{
//	printf("%s\n", "hello world");
//	printf("%.3s\n", "hello world");
//
//	return 0;
//}
//

//int main()
//{
//	int score = 0;
//	printf("请输入一个成绩:");
//	scanf("%d", &score);//&取地址，取出score的地址
//	printf("成绩是: %d\n", score);
//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	float x = 0.0f;
//	float y = 0.0f;
//	//输入值
//	scanf("%d%d%f%f", &a, &b, &x, &y);
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("x = %f\n", x);
//	printf("y = %f\n", y);
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int x;
//    double y;
//
//    // 用户输入 "    -1.5e12# 0"
//    scanf("%d", &x);
//    printf("%d\n", x);
//
//    scanf("%lf", &y);
//    printf("%lf\n", y);
//    return 0;
//}



//int main()
//{
//    int x;
//    float y;
//
//    // 用户输入 "    -13.45e12# 0"
//    scanf("%d%f", &x, &y);
//    printf("%d %f\n", x, y);
//
//    return 0;
//}


int main()
{
    int a = 0;
    int b = 0;
    float f = 0.0f;

    int r = scanf("%d %d %f", &a, &b, &f);

    printf("a=%d b=%d f=%f\n", a, b, f);
    printf("r = %d\n", r);
    return 0;
}


