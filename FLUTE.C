#include<stdio.h>
#include<conio.h>
void main()
{
float price;
clrscr();
printf("Items available in price $1000.50, $500.25, $200\n");
printf("Select the price");
scanf("\n%f", &price);

if(price==1000.50)
{
printf("Guitar");
}
else
if(price==500.25)
{
printf("Violin");
}
else
if(price==200)
{
printf("Flute");
}
else
printf("Invalid Choice");

getch();
}
