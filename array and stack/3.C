/*
row sum and column sum
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10]={0},m,n,i,j;
	clrscr();
	printf("input row : ");
	scanf("%d",&m);
	printf("input column : ");
	scanf("%d",&n);
	printf("input matrix : \n");
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
			a[i][n+1]=a[i][n+1]+a[i][j];
			a[m+1][j]=a[m+1][j]+a[i][j];
		}
	printf("with row and column sum : \n");
	for(i=1;i<=m+1;i++)
	{
		for(j=1;j<=n+1;j++)
			if(i!=m+1||j!=n+1)
				printf("%d ",a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
