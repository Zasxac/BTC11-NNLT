#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	char Arr[20][20];
	printf("Nhap cap cua ma tran: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			switch((i+j)%4)
			{
				case 0:
					Arr[i][j]=Arr[j][i]='c';
					break;

				case 1:
					Arr[i][j]=Arr[j][i]='d';
					break;

				case 2:
					Arr[i][j]=Arr[j][i]='a';
					break;	
                    	
				case 3:
					Arr[i][j]=Arr[j][i]='b';
					break;			
			}
		}
	}
for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
				{
					printf("%3.5c",Arr[i][j]);
				}
			printf("\n");	
		}	
}
