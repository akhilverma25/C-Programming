#include<stdio.h>
#include<conio.h>
void main()
{
float A[5], max=0;
int i;
clrscr();
printf("Enter five numbers");
for(i=0;i<=4;i++)
{
scanf("%f",&A[i]);
}
{
if(A[i]>max)
max=A[i];
}
printf("\n Largest number is %f",max);
getch();
}
