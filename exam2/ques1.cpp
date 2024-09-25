#include<stdio.h>
int main(){
	float l;
	float h;
	float area;
	printf("Enter the base of the triangle :");
	scanf("%f",&l);
	printf("Enter the height of the triangle :");
	scanf("%f",&h);
	area=(l*h)/2;
	printf("The area of triangle is :%f\n",area);
}
