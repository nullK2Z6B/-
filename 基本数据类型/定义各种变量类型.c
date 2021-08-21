#include <stdio.h>
int main()
{
	//定义整型
	int num;
	int num = 5;
	
	//定义长整型
	long long bignum;
	long long bignum = 123456789012345LL   //longlong赋初值>2^31-1需要加上LL
	
	//定义无符号型
	unsigned int a1;
	unsigned long long a2; 
	
	//定义单精度浮点型 有效精度6-7位
	float fl;
	float fl = 3.1415;
	
	//定义双精度浮点型 有效精度15-16位
	double db;
	double db = 3.1415926536;
	
	//定义字符型变量和字符常量
	char c;
	char c = 'e';
	return 0;
}