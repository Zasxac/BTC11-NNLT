#include<stdio.h>
#include<conio.h>
#include<math.h>

int SNT(int n)
{
    if (n<2)    
    return 0;

    for (int i=2; i<=sqrt(n);i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
	int r,c;
	int Arr[20][20];
	printf("So hang cua ma tran la: ");
	scanf("%d",&r);
	printf("So cot cua ma tran la: ");
	scanf("%d",&c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Nhap gia tri A[%d][%d]",i+1,j+1);
			scanf("%d",&Arr[i][j]);
		}
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%3d",Arr[i][j]);
		}
	printf("\n");	
	}

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{	if(SNT(Arr[i][j])==1)
			{
				printf("Phan tu so nguyen to %d tai vi tri hang %d,cot %d \n", Arr[i][j],i+1,j+1);
            }
		}	
	}
}
