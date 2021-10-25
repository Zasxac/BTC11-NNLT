#include<stdio.h>
#include<string.h>
int main()
{
	char s[256];
	printf("Moi nhap chuoi: ");
	gets(s);
	puts(s);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		if(s[i]==32)
		{
			for(int j=i;j<n;j++)
			{
				s[j]=s[j+1];
				i=i-1;			
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%s",s);
		break;
	}
}