#include<stdio.h>
int main()
{
	int a,b;
	printf("������һ�����֣�");
	scanf("%d",&a);
	for(int x=1;x<=a;x++)
	{
		b=x*x*x;
		printf("���%d\n",b);
	}
	return 0;
}