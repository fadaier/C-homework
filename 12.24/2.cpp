/*用递归输出Fibonacci前40个序列*/
#include<stdio.h>
int fib(int a)
{
	if(a==0||a==1)
		return 1;
	else
		return fib(a-1)+fib(a-2);
}
int main()
{
	int a;
	for(a=0;a<40;a++)
		printf("%d\n",fib(a));
	return 0;
}
