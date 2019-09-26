// 第2章算法---程序的灵魂

#include <stdio.h>
#include<stdlib.h>
//#include<windows.h>

int main()
{
	// 函数声明
	int Factorial();
	printf("<第2章算法---程序的灵魂>\n");
	Factorial();
	system("pause");
	//while (1);
	return 0;
}
int Factorial() {
	long x,t = 1;
	printf("当前为for循环\n请输入一个整数,将输出这个数阶乘的值\n");
	scanf("%d", &x);
	//for 循环执行 
	for (int i = 2; i <= x; i++){

		t = t * i;
	}
	printf("you input %d\n%d! is %d\n",x,x,t);
	return 0;
}
/*
int Factorial() {
	int x,t = 1, i = 2;
	printf("当前为while循环\n请输入一个整数,将输出这个数阶乘的值\n");
	scanf("%d", &x);
	// while 循环执行
	while (i <= x) {
		t = t * i;
		i++;
	}
	printf("you input %d\n%d! is %d\n", x, x, t);
	return 0;
}
*/
