/*输入两个任意的数组，合并成一个从小到大排序的新数组*/
#include<stdio.h>
int main()
{
	int a[100]={0},b[100]={0},c[200]={0};
	int d=0,e=0,f,g=0,h=0,i,j,n;
	char ch,sh;
	printf("请输入数组一\n");
	while(ch!='\n')
	{
		scanf("%d",&a[d]);
		d++;
		ch=getchar();
	}
	printf("请输入数组二\n");
	while(sh!='\n')
	{
		scanf("%d",&b[e]);
		e++;
		sh=getchar();
	}
	for(f=0;f<d+e;f++)
	{
		if(f<d)
		{
			c[f]=a[g];
			g++;
		}
		else
		{
			c[f]=b[h];
			h++;
		}
	}
	for(i=0;i<f;i++)
		for(n=0;n<f-i-1;n++)
		{
			if(c[n]>c[n+1])
			{
				j=c[n];
				c[n]=c[n+1];
				c[n+1]=j;
			}
		}
	for(i=0;i<f;i++)
		printf("%3d",c[i]);
	printf("\n");
	return 0;
}
