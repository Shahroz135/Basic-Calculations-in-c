#include"stdio.h"
#include"conio.h"
void main()
{
float celsius, fahrenheit;
clrscr();
printf("Enter the temperature in fahrenheit=");
scanf("%d",&fahrenheit);
celsius=(5.0/9.0)*(fahrenheit-32);
printf("\nvalue of temperature in celsius=%g",celsius);
getch();
}