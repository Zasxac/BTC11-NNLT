#include <stdio.h>

int main()
{
	int a[100],i,j,Arr[100][100],max,n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("Nhap so hang:\n");

	for(i=0;i<n;i++)
	{
		scanf ("%d",&a[i]);
	}

	max=a[0];
	for(i=0;i<n;i++)
	{
		if (max <a[i]) max = a[i];
	}
	for(i=0;i<n;i++)
	{
		for (j=0;j<a[i];j++) Arr[i][j]=1;
	}printf("Bieu do ngang:\n");

	for(i=0;i<n;i++)
	{
		for (j=0;j<max;j++)
		{
			if (Arr[i][j]==1) 
			printf(" * ");
			else printf(" ");
			
			if (j==(max-1)) 
			printf("\n");
		}
	}printf("Bieu do doc:\n");

	for(j=0;j<max;j++)
	{
		for (i=0;i<n;i++)
		{
			if (Arr[i][j]==1) 
			printf(" * ");
			else printf(" ");

			if (i==(n-1))
			 printf("\n");
		}
	}
}
