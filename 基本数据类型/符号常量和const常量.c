/*
笔记：

定义符号常量→用一个标识符来替代常量

法1.
#define 标识符 常量
法2.
const 数据类型 变量名 = 常量;

*/

//代码部分使用ctrl + k + u 解封，ctrl + k + c封印

//计算半径为3的圆的近似面积
//#include <stdio.h>
//#define pi 3.14
//int main()
//{
//	double r = 3;
//	printf("%f\n", pi*r*r);
//	return 0;
//	//输出结果：28.260000
//}

//计算半径为3的圆的近似周长
//#include <stdio.h>
//const double pi = 3.14;
//int main()
//{
//	double r = 3;
//	printf("%f\n", 2 * pi*r);
//	return 0;
//	//输出结果18.840000
//}

//拓展1：宏定义→可以定义任何语句或者片段
//#include <stdio.h>
//#define ADD(a, b) ((a)+(b))
//int main()
//{
//	int num1 = 3, num2 = 5;
//	printf("%d", ADD(num1, num2));
//	return 0;
//	//输出结果：8
//}

//拓展2：宏定义是直接将对应部分替换再编译运行
//#include <stdio.h>
//#define CAL(x) (x*2+1)
//int main()
//{
//	int a = 1;
//	printf("%d\n", CAL(a + 1));  //直接将a+1代换进去→a+1*2+1→4
//	return 0;
//	//输出结果 4
//}