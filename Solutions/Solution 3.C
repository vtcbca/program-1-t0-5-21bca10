/*write a program to enter number and check number is pallindrome or not
date:27th dec 2021*/
#include<stdio.h>
#include<conio.h>
 void main()
{
	int a,b,c=0,d;
	clrscr();
	printf("\n Enter any number");
	scanf("%d",&a);
	d=a;
	while(a>0)
	{
	    b=a%10;
	    c=(c*10)+b;
	    a=a/10;
	}
	if(d==c)
	{
		printf("palindrome number");
	}
	else
	{
		printf("not palindrome number");
	}
	getch();
}
