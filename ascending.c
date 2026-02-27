#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i,j,n,*p,temp;
	printf("enter the number of values you want to use:\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	if (p==NULL)
	{
	    printf("memory couldnt be assigned\n");
	    exit(0);
	}
	for (i=0;i<n;i++)
	{
		printf("enter the number %d :\n",i);
	    scanf("%d",p+i);
	    for(j=0;j<=i;j++)
	    {
	        if (*(p+i)<*(p+j))
	        {
	        	temp=*(p+i);
	        	*(p+i)=*(p+j);
	        	*(p+j)=temp;
			}
	    }
	}
	for (i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
	free(p);
	return 0;
}