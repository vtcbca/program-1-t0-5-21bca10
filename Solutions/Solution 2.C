/*Write a program to enter any number and check it is armstrong number or pallindrom number
date:27th dec 2021*/
#include<stdio.h>
#include<conio.h>
  void main()
{
	int a,b,sum=0,c;
	clrscr();
	printf("Enter a number");
	scanf("%d",&a);
	b=a;
	while(a>0)
	{
	  c=(a%10)*(a%10)*(a%10);
	  sum=sum+c;
	  a=a/10;
	}
	if(b==sum)
	  printf("%d is an armstrong number,");
	else
	  printf("%d is not an armstrong number,");
	getch();
}