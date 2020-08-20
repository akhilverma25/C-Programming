#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
clrscr();
printf("Enter the first alphabet of day\n");
scanf("%c", &ch);
switch(ch)
{
case 'm':
printf("Monday");
break;
case 'tu':
printf("Tuesday");
break;
case 'w':
printf("Wedensday");
break;
case 't':
printf("Thursday");
break;
case 'f':
printf("Friday");
break;
case 's':
printf("Saturday");
break;
case 'su':
printf("Sunday");
break;
default:
printf("Invalid Input");
break;
}
getch();
}
