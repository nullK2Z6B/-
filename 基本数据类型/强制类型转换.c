#include <stdio.h>
int main()
{
	//ǿ������ת����ʽ         ������������������
	double r = 12.56;
	int a = 3, b = 5;
	printf("%d\n", (int)r); //��double���͵�rǿ��ת����int���͡�12
	printf("%d\n", a / b);  // ������0
	printf("%.1f", (double)a / (double)b); //ǿ��ת��Ϊ�����ͣ�������һλС����0.6
	return 0;
}