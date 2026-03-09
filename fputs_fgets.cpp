#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c[50],d[50];
	FILE* p;
	p=fopen("D:\\Sulav BIT\\test.txt","w");
	if (p==NULL)
	{
		printf("file not created\n");
		exit(0);
	}
	printf("enter a sentence: ");
	gets(c);
	fputs(c,p);
	fclose(p);
	p=fopen("D:\\Sulav BIT\\test.txt","r");
	fgets(d,sizeof(d),p);
	printf("%s",d);
	return 0;
}
