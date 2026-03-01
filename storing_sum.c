#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sum,a,b;
	char n;
	printf("enter two numbers\n");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum is:%d\n",sum);

	printf("do you want to store the values?[y/n]");
	scanf("%s",&n);
	if (n=='y' || n=='Y')
		{
			FILE *p;
			p=fopen("D:\\kkarma\\emp.txt","a");
			if (p==NULL)
				{
					printf("file not created/cannot be opened\n");
				}
			else
				{
					printf("file sucessfully saved\n");
					fprintf(p,"1st num is:%d\n",a);
					fprintf(p,"2nd num is:%d\n",b);
					fprintf(p,"sum is:%d\n",sum);
					fclose(p);
				}
		}
	else if (n=='n'||n=='N')
		{
			printf("Thankyou for using the program\n");
			exit(0);
		}
	return 0;
}


