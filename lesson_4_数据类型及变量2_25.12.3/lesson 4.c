#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	printf("%d\n", 3 + 5);
	int a = 3;
	int b = 10;
	printf("%d\n", a - b);
	int c = a * b;
	printf("%d\n", c);
	printf("%d\n", b / a);
	// 除号两端都是整数的时候，执行的是整数除法，得到的是整除的商
	// 要算出小数，至少有一端是浮点数
	printf("%f\n", 5.0 / 2);
	double d = 5.0;
	double e = 2;
	printf("%f\n", d / e);

	int f = 5 % 2;//取模运算，取余数
	printf("%d\n", f);
	
	int m = 10;
	m += 3;//等价于 m = m + 3;
	printf("%d\n", m);//13
	m %= 5;//等价于 m = m % 5; m = 13 % 5;
	printf("%d\n", m);

	int n = 10;
	++n;
	printf("%d\n", n); // 11

	// 前置++，先加1，再使用
	// 后置++，先使用，再加1
	int x = 10;
	int y = ++x; // y = 11; x = 11;
	printf("x = %d, y = %d\n", x, y);

	int p = 10;
	int q = p++; // q = 10; p = 11;
	printf("p = %d, q = %d\n", p, q);

	/* int r = 1;
	 int s = (++r + ++r + ++r);
	 printf("%d\n", s);*/
	// 上面这段代码是未定义行为，不要这样写

	int t = -1;
	printf("%d\n", -t);

	int u = 3;
	double v = 2.918;
	u = (int)v; // 强制类型转换
	printf("%d\n", u); // 2

	int amount = 5;
	printf("这里有 %d 个苹果\n", amount);

	printf("我喜欢吃%s\n", "宫保鸡丁");

	/*const char* sentence = "你好！";
	printf("他走过来对你说 %s，然后走了\n", sentence);*/

	printf("%s今年%d岁，体重%.1f公斤\n", "小明", 20, 65.5); // printf占位符与位置一一对应

	// 注意：printf 中 float 会被提升为 double，用 %f 输出；
	// scanf 中：float 用 "%f"，double 用 "%lf"
	// float -- scanf "%f"  printf "%f"
	// double -- scanf "%lf" printf "%f"

	printf("%5d\n", 1234);      // 总宽度至少是5位，不够的会补空格，右对齐
	printf("%-5d\n", 1234);     // 左对齐
	printf("%.2f\n", 1.239);    // 小数点后保留2位，四舍五入
	printf("%6.2f\n", 1.239);   // 总宽度至少6位，小数点后保留2位

	int h = 6;
	int j = 2;
	printf("%*.*f\n", h, j, 0.5);

	printf("%.5s\n", "hello world"); // 只输出前5个字符

	int score = 0;
	printf("请输入你的分数：");
	scanf("%d", &score); // scanf 不要在格式中加 '\n'
	printf("成绩是：%d\n", score);

	int age = 0;
    float height = 0.0f;
	float weight = 0.0f;
	float score2 = 0.0f;

	printf("请输入年龄: ");
	scanf("%d", &age);

	printf("请输入身高");
	scanf("%f", &height);

	printf("请输入体重");
	scanf("%f", &weight);

	printf("请输入分数2");
	scanf("%f", &score2);

	printf("年龄: %d\n", age);
	printf("身高: %.1f\n", height);
	printf("体重: %.1f\n", weight);
	printf("分数2: %.1f\n", score2);
	//scanf中           
	// float用%f，       
	// double用%lf
	//long double用%Lf
	
	int r = scanf("%d %f %f %f", &age, &height, &weight, &score2);
	printf("r = %d\n", r); // 返回成功读取的变量个数
	
	
	return 0;
}