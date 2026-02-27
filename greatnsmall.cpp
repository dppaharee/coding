#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i,n,*p,large,small;
	printf("enter the number of values you want to use:\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	p=NULL;
	if (p==NULL)
	{
	    printf("memory couldnt be assigned\n");
	    exit(0);
	}
	for (i=0;i<n;i++)
	{
		printf("enter the number %d :\n",i);
	    scanf("%d",p+i);
	    if (i==0)
		{
			large=*(p+0);
			small=*(p+0);
		}
		else
		{
			if (large<*(p+i))
			{
				large=*(p+i);
			}
			else if (small>*(p+i))
			{
				small=*(p+i);
			}
		}
	}
	printf("greatest is: %d\nsmallest is: %d",large,small);
	free(p);
	return 0;
}