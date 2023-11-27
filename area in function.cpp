#include<stdio.h>
#include<math.h>
float squareArea(float side);
float rectangleArea(float a,float b);
float circleArea(float radius);
int main()
{
	float a=4,b=6,side=6,radius=2;
	printf("area is %f",side*side);
	printf("area is %f",a*b);
	printf("area is %f",3.14*radius*radius);
}
float squareArea(float side)
{
	return side*side;
}
float recatngleArea(float a,float b)
{
	return a*b;
}
float circleArea(float radius)
{
	return 3.14*radius*radius;
}
