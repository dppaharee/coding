//count with file handling
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,space=0,vowel=0,upper=0,lower=0;
	char ch[50];
	FILE *p;
	p=fopen("D:\\Sulav BIT\\test1.txt","r");
	if (p==NULL)
	{
		printf("file not opened");
		exit(0);
	}
	fgets(ch,sizeof(ch),p);
		printf("%s\n",ch);
		for ( i=0;ch[i]!='\0';i++)
		{
			if (ch[i]=='A'||ch[i]=='a'||ch[i]=='E'||ch[i]=='e'||ch[i]=='I'||ch[i]=='i'||ch[i]=='O'||ch[i]=='o'||ch[i]=='U'||ch[i]=='u')
			{
				vowel++;
			}
			if (ch[i]>='A'&&ch[i]<='Z')
			{
				upper++;
			}
			if (ch[i]>='a'&&ch[i]<='z')
			{
				lower++;
			}
			if (ch[i]==' ')
			{
				space++;
			}
		}
		printf("%d vowels\n",vowel);
		printf("%d consonant\n",(upper+lower)-vowel);
		printf("%d uppercase\n",upper);
		printf("%d lowercase\n",lower);
		printf("%d space\n",space);
		printf("%d letters\n",space+1);
		printf("%d words\n",upper+lower);
	fclose(p);
	return 0;
}
