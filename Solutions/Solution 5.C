/*Write a program to enter any number and print it in reverse.
date:27th dec 2021*/
#include<stdio.h>
#include<conio.h>
 void main()
{
	int a,b=0;
	clrscr();
	printf("\n Enter a number to reverse");
	scanf("%d",&a);
	while(a!=0)
	{
	  b=b*10;
	  b=b+a%10;
	  a=a/10;
	}
	printf("%d",b);
	getch();
}