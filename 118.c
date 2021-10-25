#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,Tongcheo=0;
	int Tongcot[20];
	int Tonghang[20];
	int Arr[20][20];
	printf("Nhap cap cua ma tran vuong: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{	
				printf("Nhap ma tran vi tri A%d%d=",i+1,j+1);
				scanf("%d",&Arr[i][j]);
			}
		}
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				{	
					printf("%3d",Arr[i][j]);
				}
			printf("\n");	
		}
		
	for(int i=0;i<n;i++)
		{	Tonghang[i]=0;
			for(int j=0;j<n;j++)
			{
				Tonghang[i]+=Arr[i][j];
			}		
	printf("Tong hang [%d]= %d\n",i+1,Tonghang[i]);	
		}
	for(int j=0;j<n;j++)
		{	Tongcot[j]=0;
			for(int i=0;i<n;i++)
			{
				Tongcot[j]+=Arr[i][j];
			}		
		printf("Tong cot [%d]= %d\n",j+1,Tongcot[j]);	
		}		
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==j)
				Tongcheo+=Arr[i][j];
			}
		}	
		printf("Tong duong cheo = %d ",Tongcheo);
}
