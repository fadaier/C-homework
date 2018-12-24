/*输入一个英文句子，输入一个n，将句子中第n个单词删除*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	int b,c,d,e=0,f=0,g;
	printf("请输入一个句子\n");
	gets(a);
	printf("请问要删去第几个单词\n");
	scanf("%d",&b);
	c=1;
	d=1;
	while(c<b)
	{
		if(a[d-1]<'A'||a[d-1]>'Z'&&a[d-1]<'a'||a[d-1]>'z')
			if(a[d]>='A'&&a[d]<='Z'||a[d]>='a'&&a[d]<='z')
				c++;
		d++;
	}
	d--;
	while(a[d+e]>='A'&&a[d+e]<='Z'||a[d+e]>='a'&&a[d+e]<='z')
		e++;
	g=strlen(a);
	while(f<g-d-e)
	{
		a[d+f]=a[d+e+f+1];
		f++;
	}
	puts(a);
	return 0;
}
