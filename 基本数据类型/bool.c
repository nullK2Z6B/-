#include <stdio.h>
#include <stdbool.h>   //c语言中须添加stdbool.h头文件才可以使用布尔型
int main()
{
	//true→非0的值→存储时为1
	//false→值为0→存储时为0
	bool flag1 = 0, flag2 = true;   //对于bool类型变量，0或false为假，非0或者true为真
	int a = 1, b = 1;
	printf("%d %d %d\n", flag1, flag2, a == b);  //bool类型变量使用%d输出时真为1，假为0
	return 0;
	//输出结果0,1,1  
}