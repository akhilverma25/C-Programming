#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();

printf("Enter the number\n");
scanf("%d", &n);
{
for(i=1; i<=10; i++)
printf("%d\n", n*i);
}
getch();
}
