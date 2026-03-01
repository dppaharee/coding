#include<stdio.h>
#include<stdlib.h>
struct emp
{
	char name[40];
	int id;
};
int main()
{
	int i,j,n;
	FILE *k;
	k=fopen("D:\\kkarma\\booklet.txt","a");
	struct emp old;
	printf("\nhow many data do you want to store?\n");
	scanf("%d",&n);
	struct emp members[n];
	fprintf(k,"\nId\tName\n");

	for (i=0; i<n; i++)
		{
			fflush(stdin);
			printf("\nenter name[%d]\n",i);
			gets(members[i].name);
			printf("\nenter id[%d]\n",i);
			scanf("%d",&members[i].id);
			old=members[0];
			for (j=i+1; j<n; j++)
				{
					if (members[i].id<members[j].id)
						{
							old=members[i];
						}
				}
		}
	printf("\n*******EMPLOYEE DATA*******\n");
	fprintf(k,"\n*******EMPLOYEE DATA*******\n");
	for (i=0; i<n; i++)
		{
			fprintf(k,"\n%d\t%s\n",members[i].id,members[i].name);
			printf("\n%d\t%s\n",members[i].id,members[i].name);
		}
	printf("\n\noldest member\n%d\t%s\n",old.id,old.name);
	fprintf(k,"\n\noldest member\n%d\t%s\n",old.id,old.name);
	fclose(k);
	return(0);
}