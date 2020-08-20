#include<stdio.h>
#include<conio.h>
void main()
{
int p,c,m;
float per;
clrscr();
printf("Enter the marks of Physics, Chemistry, Maths");
scanf("%d%d%d",&p,&c,&m);
per=(p+c+m)*100/300;
printf("Percentage is %f %",per);
getch();
}