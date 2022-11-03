#include"stdio.h"
#include"conio.h"
#include"math.h"
void main()
{
float a,b,c, s, area;
clrscr();
printf("To find the area of triangle:\nwe require three sides of a triange\nPlease enter the first side 'a'=");
scanf("%f",&a);
printf("\nEnter the second side 'b'=");
scanf("%f",&b);
printf("\nEnter the third side 'c'=");
scanf("%f",&c);
s=(a+b+c)/2.0;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nArea of a triangle=%.3lf",area);
getch();
}

