/*
gcd
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a, b, r;
	clrscr();
	printf("finding the gcd of two numbers : \n");
	printf("input two numbers : ");
	scanf("%d %d",&a,&b);
	while(a%b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	printf("gcd : %d",b);
	getch();
	return 0;
}
