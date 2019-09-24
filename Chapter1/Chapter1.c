
#include <stdio.h>
#include<stdlib.h>
//#include<windows.h>

int main()
{
	// 函数声明
	int Max(int x, int y);
	// 局部变量声明
	int a, b, c, sum;
	printf("<第1章程序设计和C语言>\n请输入任意两个整数用逗号隔开\n将会输出这两个数的和以及比较大的数\n");
	scanf("%d, %d", &a, &b);
	sum = a + b;
	c = Max(a, b);
	//标准输出信息(如std::cout、printf等)都是输出到控制台的(也就是传说中的黑窗)
	printf("you input %d and %d\nTheir Sum is %d\n Max is %d\n", a, b, sum, c);
	//将信息输出在调试器中,需要#include<windows.h>
	//OutputDebugString("this is a c program\n");
	//暂停，需要#include<stdlib.h>
	system("pause");
	//while (1);
	//return 0;
}
int Max(int x, int y) {
	// 局部变量声明
	int z;
	if (x > y)
		z = x;
	else
		z = y;
	return z;
}