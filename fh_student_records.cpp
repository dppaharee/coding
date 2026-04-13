#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	char name[40];
	float marks;
} ;
int  main()
{
	int N,i;
	FILE *f=fopen("E:\\codes\\records.txt","w");
	if (f==NULL)
	{
		printf("file not created");
		exit(0);
	}
	printf("enter the no. of student data you want to store:");
	scanf("%d",&N);
	struct student S[N+1]; //+1 storestrmp value for comparison
	printf("enter roll no. of student 1:");
	scanf("%d",&S[0].roll);
	printf("enter name of student 1:");
	fflush(stdin);
	gets(S[0].name);
	printf("enter marks of student 1:");
	scanf("%f",&S[0].marks);
	S[N]=S[0];
	for (i=1; i<N; i++)
	{
		printf("enter roll no. of student %d:",i+1);
		scanf("%d",&S[i].roll);
		printf("enter name of student %d:",i+1);
		fflush(stdin);
		gets(S[i].name);
		printf("enter marks of student %d:",i+1);
		scanf("%f",&S[i].marks);
		if (S[i].marks>S[N].marks)
		{
			S[N]=S[i];
		}
	}
	fwrite(S,sizeof(struct student),N,f);
	printf("the highest was obtained by:\n%s rollno: %d with marks: %.1f",S[N].name,S[N].roll,S[N].marks);
	fclose(f);
	return 0;
}