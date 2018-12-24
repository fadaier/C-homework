/*编写实现strcat连接函数*/
#include<stdio.h>
void cat(char a[],char b[])
{
	int i=0,n=0;
	while(a[i]!='\0')
		i++;
	while(b[n]!='\0')
	{	
		a[i+n]=b[n];
		n++;
	}
	a[i+n+1]='\0';
}
int main()
{
	char a[300]={0},b[100]={0};
	printf("请输入第一个字符串\n");
	gets(a);
	printf("请输入第二个字符串\n");
	gets(b);
	cat(a,b);
	puts(a);
	return 0;
}
