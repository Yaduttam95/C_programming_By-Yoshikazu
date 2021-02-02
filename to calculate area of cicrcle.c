/*WAP to calculate radius of cicrcle*/

#include<stdio.h>
#include<conio.h>
int main()
{
	float r,area;
	printf("Enter the radius of circle");
	scanf("%f",&r);
	area=(3.142857)*(r*r);
	printf("%f",area);
	printf("The area of given circle with radius %f is %.2f",r,area);
	getch();
	return 0;
}
