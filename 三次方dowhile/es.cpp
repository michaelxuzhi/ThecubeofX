#include<stdio.h>
int main()
{
	int a,b;
	int x=1;
	printf("������һ������:");
	scanf("%d",&a);
	do
	{
		b=x*x*x;
		printf("���%d\n",b);
		x++;
	}
	while(x<=a);
	return 0;
}