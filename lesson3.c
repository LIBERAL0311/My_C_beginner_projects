#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#ifdef _WIN32
#include <windows.h>
#define SLEEP_MS(ms) Sleep(ms)
#else
#include <unistd.h>
#define SLEEP_MS(ms) usleep((ms) * 1000)
#endif

int main()
{
	printf("acd\\0\n");
	printf("%c\n", 'x');
	printf("%c\n", 88);
	printf("%c\n", '\130');
	printf("%c\n", '\x30');
	

	int len1 = strlen("aiohduiqdnioqwehdwdiowqhdi");
	printf("%d\n", len1);
	int len2 = strlen("C:\\code\138\\class\teat.c");
	printf("%d\n",len2);

	    int a = 3;
		printf("%zu\n", sizeof(int));
		printf("%zu\n", sizeof(a));
		printf("%zu\n", sizeof(char));
		printf("%zu\n", sizeof(bool));//需要一个头文件<stdbool.h>
		printf("%zu\n", sizeof(short));
		printf("%zu\n", sizeof(int));
		printf("%zu\n", sizeof(long));
		printf("%zu\n", sizeof(long long));
		printf("%zu\n", sizeof(float));
		printf("%zu\n", sizeof(double));
		printf("%zu\n", sizeof(long double));
	
		short s = 12;
		int b = 10;
		printf("%zu\n", sizeof(s = b + 1));
		printf("s=%d\n", s);
		
	int age1;

	unsigned int age = 18;//初始化
	float weight  ;
		weight = 68.0f;//赋值
	int score = 100;
	printf("age=%u, weight=%.2f, score=%d\n", age, weight, score);
	printf("\a");
	while (1) {
		printf("\a");
		/*fflush(stdout);*/
		SLEEP_MS(200);
	}
		return 0;
}
