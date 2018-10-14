#include<stdio.h>
int main()
{
	int a,b;
	int x=1;
	printf("请输入一个数字:");
	scanf("%d",&a);
	do
	{
		b=x*x*x;
		printf("输出%d\n",b);
		x++;
	}
	while(x<=a);
	return 0;
}