#include<stdio.h>
#include<conio.h>
void main()
{
int c,d;
clrscr();
printf("Enter two numbers");
scanf("%d%d", &c,&d);
printf("\nBefore swapping %d%d",c,d);
c=c+d;
d=c-d;
c=c-d;
printf("After swapping %d%d",c,d);
getch();
}