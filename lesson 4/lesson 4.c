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
//除号两端都是正式的时候，执行的整数的除法，得到的是整除的商
//要算出小数，至少有一个位浮点小数
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
  //n = n + 1;
  // n += 1;
	++n;
  //n++;//等价于 n = n + 1;
	printf("%d\n", n);//11

	//前置++，先加1，再使用
	//后置++，先使用，再加1
	int x = 10;
	 int y = ++x;//y = 11; x = 11;
	 printf("x = %d, y = %d\n", x, y);
	 printf("%d\n", x);//11
	 printf("%d\n", y);//11
	
	 int p = 10;
	 int q = p++;//q = 10; p = 11;
	 printf("p = %d, q = %d\n", p, q);

	/* int r = 1;
	 int s = (++r + ++r + ++r);
	 printf("%d\n", s);*/
	//上面这段代码是错误代码，不能这样写

	 int t = -1;
	 printf("%d\n", -t);

	 int u = 3;
	 double v = 2.918;
	 u = (int) v;//强制类型转换
	 printf("%d\n", u);//2



	 int amount = 5;
	 printf("这里有 %d 个苹果\n", amount);
	 
	 printf("我喜欢吃%s\n", "宫保鸡丁");

	 /*const char* sentence = "你好！";
	 printf("他走过来对你说 %s，然后走了\n", sentence);*/

	 printf("%s今年%d岁，体重%.1f公斤\n", "小明", 20, 65.5);//printf占位符与位置一一对应

	 // float 和 double 都可以用 %f 来输出
     //float--%f
	 //double--%lf 

	 printf("%5\n", 1234);//总宽度至少是5位，不够的会补空格，右对齐
	 printf("%-5d\n", 1234);//总宽度至少是5位，不够的会补空格，左对齐
	 printf("%.2f\n", 1.239);//小数点后保留2位，不够的补0，四舍五入
	 printf("%6.2f\n", 1.239);//总宽度至少6位，小数点后保留2位，不够的补0，四舍五入
	
	 int h = 6;
	 int j = 2;
	 printf("%*.*f\n", h, j, 0.5);

	 printf("%.3s\n", "hello world");//只输出前3个字符
	 
	 
	 
	 
	 
	 
	 
	 
	 












	  return 0;
}