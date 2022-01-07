/*Enter any number and check it is prime or not
date:27th dec 2021*/
#include<stdio.h>
#include<conio.h>
 void main()
{
	int n,i,c=0;
	clrscr();
	printf("Enter any number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
	  if(n%i==0)
	  c=1;
	  break;
	}
	if(c==0)
	  printf("number is prime",n);
	else
	  printf("number is not prime",n);
	getch();
}