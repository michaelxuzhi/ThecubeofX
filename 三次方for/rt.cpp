#include<stdio.h>
int main()
{
	int a,b;
	printf("请输入一个数字：");
	scanf("%d",&a);
	for(int x=1;x<=a;x++)
	{
		b=x*x*x;
		printf("输出%d\n",b);
	}
	return 0;
}