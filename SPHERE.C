//program to get volume of sphere
#include"stdio.h"
#include"conio.h"
#define pi 3.1416
void main()
{
int radius;
float  volume;
clrscr();
printf("Enter the radius of sphere:");
scanf("%d",&radius);
volume=4.0/3.0*radius*radius*radius*pi;
printf("vaue of volume of the sphere:%.2f",volume);

getch();
}