#include<stdio.h>
int main()
{
	float base,height,area;
	printf("enter base of triangle: ");
	scanf("%f",&base);
	
	printf("enter height of the triangle: ");
	scanf("%f",&height);
	area=(base*height)/2;
	printf("Area of triangle: %f\n",area);
	return 0;
}
