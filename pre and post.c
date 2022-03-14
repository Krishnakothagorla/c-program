#include<stdio.h>
void main()
{
	int x=4,y;
	y=++x;
	printf("Here, Value of X=4\n");
	printf("For y=++x  the value of X is %d and Y is %d",x,y);
	printf("\n\nNow X = %d and Y = %d",x,y);
	y=x++;
	printf("\nFor y=x++  the value of X is %d and Y is %d",x,y);
	printf("\n\nNow X = %d and Y = %d",x,y);
	y=--x;
	printf("\nFor y=--x  the value of X is %d and Y is %d",x,y);
	printf("\n\nNow X = %d and Y = %d",x,y);
	y=x--;
	printf("\nFor y=x--  the value of X is %d and Y is %d",x,y);
}
