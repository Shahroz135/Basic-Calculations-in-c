#include"stdio.h"
#include"conio.h"
void main()
{
float celsius, fahrenheit;
clrscr();
printf(" Enter temperature in celsius=");
scanf("%f",&celsius);
fahrenheit=(9.0/5.0)*celsius+32;
printf("\nValue of temperature in fahrenheit=%.4f",fahrenheit);
getch();
}