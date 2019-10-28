// 第2章算法---程序的灵魂

#include <stdio.h>
//system("pause");
#include<stdlib.h>
//#include<windows.h>

int main()
{
	// 函数声明
	int y,Factorial(),Polynomial();
	printf("<第2章算法---程序的灵魂>\n求阶乘请输入1,求多项式请输入非1\n");
	scanf("%d", &y);
	if (y == 1) {
		Factorial();
	}
	else {
		Polynomial();
	}
	system("pause");
	//while (1);
	return 0;
}
int Factorial() {
	int x,t = 1;
	printf("当前为for循环\n请输入0-31整数,将输出这个数阶乘的值\n");
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
	printf("当前为while循环\n请输入0-31整数,将输出这个数阶乘的值\n");
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
int Polynomial()
{
	int z,sign = 1;
	double deno = 2.0, sum = 1.0, term;
	printf("多项式:1 - 1/2 + 1/3 - 1/4 + ...\n请输入一个整数n,将输出该多项式的前n项和\n");
	scanf("%d", &z);
	while (deno <= z)
	{
		sign = -sign;
		term = sign / deno;
		sum = sum + term;
		deno = deno + 1;
	}
	printf("you input %d\n该多项式的前%d项和为 %f\n", z,z, sum);
	return 0;
}

