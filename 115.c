#include <stdio.h>

int main()
{
	int n,i,j,a[100][100],b,c;
	printf("Nhap chieu cao n: ");
	scanf("%d",&n);

	b=(2*n-1);

	for (i=0;i<n;i++)
	{
		for(j=0;j<b;j++)
		{
			if ((i==0)&&(j==(n-1))) a[i][j]=1;
			if (j==(n-i-1)) a[i][j]=1;
			else if (j==(n+i-1)) a[i][j]=1;
			if (i==(n-1)) a[i][j]=1;
		}
	}

	for (i=1;i<n;i++)
	{
		for(j=1;j<b;j++)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j+1];
		}
	}
    
	for (i=0;i<n;i++)
	{
		for(j=0;j<b;j++)
		{
				if (a[i][j]==0) printf("  ");
				else printf("%d ",a[i][j]);
		}
			if (j=(b-1)) printf("\n");
	}
}
