/*Enter any number to print sum of digit
date:27th dec 2021*/
#include<stdio.h>
#include<conio.h>
 void main()
{
	int a,b,sum=0;
	clrscr();
	printf("Enter any number");
	scanf("%d",&a);
	while (a>0)
	{
	   b=a%10;
	   sum=sum+b;
	   a=a/10;
	}
	printf("Sum of digits is %d",sum);
	getch();
}