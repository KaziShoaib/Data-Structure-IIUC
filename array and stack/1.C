/*
matrix transpose
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10][10],i,j,m,n;
	clrscr();
	printf("input no of rows : ");
	scanf("%d",&m);
	printf("input no of columns : ");
	scanf("%d",&n);
	printf("input matrix : \n");
	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	printf("after transposing : \n");
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=m;i++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}










