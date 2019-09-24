// 第2章算法---程序的灵魂
//

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
	int x,t = 1;
	printf("请输入一个大于1的整数,将输出这个数阶乘的值\n");
	scanf("%d", &x);
	/* for 循环执行 */
	for (int i = 2; i <= x; i++){

		t = t * i;
	}
	printf("you input %d\n%d! is %d\n",x,x,t);
	return 0;
}