/*
adding to matrix
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,i,j,a[10][10],b[10][10];
	clrscr();
	printf("input rows : ");
	scanf("%d",&m);
	printf("input columns : ");
	scanf("%d",&n);
	printf("input first matrix : \n");
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	printf("input second matrix : \n");
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&b[i][j]);
	printf("after adding : \n");
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			printf("%d ",a[i][j]+b[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
