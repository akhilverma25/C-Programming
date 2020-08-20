#include<stdio.h>
#include<conio.h>
void main()
{
char x;
clrscr();
printf("Enter a charcter\n");
scanf("%c",&x);

if((x=='a') || (x=='A') || (x=='e') || (x=='I') || (x=='i') || (x=='o') || (x=='O') || (x=='U')  || (x=='u'))
{
printf("This is a vowel");
}
else
{
printf("This is a consonent");
}
getch();
}
