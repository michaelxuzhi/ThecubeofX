#include<stdio.h>
void main()
{
	int a,b;
	int x=1;
	printf("请输入一个数字:");
	scanf("%d",&a);
	while(x<=a)
	{
		b=x*x*x;
	printf("输出:%d\n",b);
	x++;
	}

}                                                    