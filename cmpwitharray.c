#include<stdio.h>
#include<stdlib.h>
struct emp
{
	char name[40];
	int id;
	int sal;
};
void cmp (struct emp[]);
int N=0,i=0,j=0;
int main()
{
	printf("how many number are you adding?\n",i);
	scanf("%d",&N);	
	struct emp a[N];
	for (i=0;i<N;i++)
	{
		fflush(stdin);
		printf("enter name[%d]\n",i);
		gets(a[i].name);
		printf("enter id[%d] and salary[%d]\n",i,i);
		scanf("%d %d",&a[i].id,&a[i].sal);
	}
	cmp(a);
	return 0;
}
void cmp (struct emp x[])
{
	struct emp temp[N];
	for (i=0;i<N;i++)
	{
		for (j=i+1;j<N;j++)
	{
		if (x[i].sal>x[j].sal)
		{
			temp[i]=x[i];
			x[i]=x[j];
			x[j]=temp[i];
		}
	}
	for (i=0;i<N;i++)
	{
		printf("name[%d]:%s\n",i,x[i].name);
		printf("enter id[%d]:%d and salary[%d]:%d\n",i,x[i].id,i,x[i].sal);
	}
	}
}