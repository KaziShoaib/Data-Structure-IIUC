/*
matrix multiplication
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,i,j,k,x[10][10],y[10][10],z[10][10]={0};
	clrscr();
	do
	{
		clrscr();
		printf("input row of first matrix : ");
		scanf("%d",&a);
		printf("input column of first matrix : ");
		scanf("%d",&b);
		printf("input row of second matrix : ");
		scanf("%d",&c);
		printf("input column of second matrix : ");
		scanf("%d",&d);
	}while(b!=c);
	printf("input first matrix : \n");
	for(i=1;i<=a;i++)
		for(j=1;j<=b;j++)
			scanf("%d",&x[i][j]);
	printf("input second matrix : \n");
	for(i=1;i<=c;i++)
		for(j=1;j<=d;j++)
			scanf("%d",&y[i][j]);
	for(i=1;i<=a;i++)
		for(j=1;j<=d;j++)
			for(k=1;k<=b;k++)
				z[i][j]+=x[i][k]*y[k][j];
	printf("after multiplication :\n");
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=d;j++)
			printf("%d ",z[i][j]);
		printf("\n");
	}
	getch();
	return 0;
}
