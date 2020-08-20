#include<stdio.h>
#include<conio.h>
void main()
{
int A[10],i,count1 = 0,count2 = 0;
clrscr();
printf("Enter 10 integers");
for(i=0; i<=9; i++)
{
scanf("%d", &A[i]);
}
for(i=0; i<=9; i++)
{
if(A[i]%2 == 0)
count 1++;
else
count 2++;
}
printf("\nEven=%d,odd=%d",count1,count2);
getch();
}