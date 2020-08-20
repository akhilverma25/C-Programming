#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter three integers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("A is largest %d", a);
}

else if((b>a)&&(b>c))
{
print("B is largest %d",b);
}
else
{
printf("C is largest %d", c);
}
getch();
}