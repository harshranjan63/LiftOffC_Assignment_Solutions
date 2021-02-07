//Q3. Write a c program to enter the radius of a circle and find its diameter, circumference and area.
#include<stdio.h>
int main()
{
	float r,d,c,a;
	char s;
	do
	{
		printf("\nplease enter the radius of the cirlcle: ");
		scanf("%f",&r);
		d=2*r;
		c=(22/7)*d;
		a=(22/7)*(r*r);
		printf("Diameter= %f\n",d);
		printf("Circumference= %f\n",c);
		printf("Area= %f\n",a);
		printf("Do you want to enter again?(y/n):");
		scanf("%s",&s);
	}while(s=='y');
	return(0);
}
