#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{
	char s[256];
	int S=0;
	printf("Hay nhap vao mot chuoi bat ky: ");
	gets(s);
	puts(s);
	int n=strlen(s);
	for(int i=n-1;i>=0;i--)
		{
			S+=(int)(s[i]-'0')*(pow(10,n-i-1)); 	
		}
	 printf("%d",S);
}
