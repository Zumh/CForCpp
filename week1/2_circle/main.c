#include <stdio.h>
/*
 * Circle and Area
 * 10/06/2023
 */
#define PI 3.14159

int main(void){
	// get the radius 
	// use formula for circle area PI * radius * radius
	double area = 0.0, radius = 0.0;

	printf("Enter radius: ");

	scanf("%lf", &radius);

	area = PI * radius * radius;

	printf("radius of %lf meters; area is %lf sq. meters\n", radius, area);


	return(0);
}
