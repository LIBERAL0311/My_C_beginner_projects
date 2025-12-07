#include <stdio.h>

/*
  简单示例程序：展示不同字符串/字符数组的初始化和打印方式，
  以及如何打印字符与其 ASCII 值。
*/
int main()
{
    /* 向终端输出若干行文本（注意换行符 '\n'） */
    printf("Hello, World!\n");   // 英文问候并换行
    printf("你好\n");             // 中文问候并换行（UTF-8 源文件）
    printf("konnichiwa\n");      // 日文罗马字问候并换行
    printf("2025.11.28\n");      // 日期并换行
   
    /* 三种不同的字符串/字符数组初始化方式 */
    char arr1[] = "hello world1";                         // 常见的字符串字面量初始化（编译器自动加 '\0'）
    char arr2[] = { 'h','e','l','l','o',' ','w','o','r','l','d','2','\0' }; // 显式列出每个字符，最后手动加 '\0'
    char arr3[] = { "hello world3" };                     // 使用字符串字面量作为花括号内的初始化（非典型写法，建议改为 char arr3[] = "hello world3";）
    printf("%s\n", arr1); // 使用 %s 打印以 '\0' 结尾的字符数组（字符串）
    printf("%s\n", arr2);
    printf("%s\n", arr3); 
   
    /* 字符与 ASCII 值示例 */
    int A = 65;                       // 整数 65（ASCII 对应 'A'）
    char arr4[] = { 'A' };            // 单字符数组（注意：没有隐含的终止符 '\0'）
    // 打印字符本身（使用 %c）
    printf("%c\n", arr4[0]);
    // 打印 ASCII 值（两种写法）
    printf("%d\n", A);                        // 直接打印整数变量 A 的值
    printf("%d\n", (unsigned char)arr4[0]);   // 将字符转换为整型再打印，确保负值不会出现（安全转换）
    // 同行打印字符与其 ASCII 值
    printf("%c (ASCII %d)\n", arr4[0], (unsigned char)arr4[0]);

    /* 打印带反斜杠的路径：反斜杠在字符串字面量中需要转义 */
    printf( "D:\\myfirstcbeginnerprojects\\2025.11.28");
    /* 发出系统提示音（如果终端/系统支持） */
    printf("\a");
    return 0;
}