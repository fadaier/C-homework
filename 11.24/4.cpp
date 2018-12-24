/*定义一个学生结构体，包含学号姓名，输入4个学生信息，按学号从小到大输出*/
#include<stdio.h>
struct stu
{
	int num;
	char name[20];
};
int main()
{
	struct stu stua[4]={0},stub,*p=stua;
	int i,a;
	for(i=0;i<4;i++)
	{
		printf("请输入学号:");
		scanf("%d",&(p+i)->num);
		getchar();
		printf("请输入姓名:");
		gets((p+i)->name);
	}
	for(i=0;i<3;i++)
		for(a=0;a<3-i;a++)
			if(((p+a)->num)>((p+a+1)->num))
			{
				stub=stua[a];
				stua[a]=stua[a+1];
				stua[a+1]=stub;
			}
	printf("学号  姓名\n");
	for(i=0;i<4;i++)
		printf("%3d%6s\n",(p+i)->num,(p+i)->name);
	return 0;
}
