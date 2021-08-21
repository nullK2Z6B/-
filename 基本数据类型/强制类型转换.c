#include <stdio.h>
int main()
{
	//强制类型转换格式         （新类型名）变量名
	double r = 12.56;
	int a = 3, b = 5;
	printf("%d\n", (int)r); //把double类型的r强制转换成int类型→12
	printf("%d\n", a / b);  // 整除→0
	printf("%.1f", (double)a / (double)b); //强制转换为浮点型，并保留一位小数→0.6
	return 0;
}